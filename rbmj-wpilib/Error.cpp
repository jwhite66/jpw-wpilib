/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "Error.h"

#include <taskLib.h>
#include <stdio.h>
#include <string.h>

#include "NetworkCommunication/FRCComm.h"
#include "Timer.h"
#include "Utility.h"

bool Error::m_stackTraceEnabled = false;
bool Error::m_suspendOnErrorEnabled = false;

Error::Error()
	: m_code(0)
	, m_lineNumber(0)
	, m_originatingObject(NULL)
	, m_timestamp (0.0)
{}

Error::~Error()
{}

void Error::Clone(Error &error)
{
	m_code = error.m_code;
	m_message = error.m_message;
	m_filename = error.m_filename;
	m_function = error.m_function;
	m_lineNumber = error.m_lineNumber;
	m_originatingObject = error.m_originatingObject;
	m_timestamp = error.m_timestamp;
}

Error::Code Error::GetCode() const
{	return m_code;  }

const char * Error::GetMessage() const
{	return m_message.c_str();  }

const char * Error::GetFilename() const
{	return m_filename.c_str();  }

const char * Error::GetFunction() const
{	return m_function.c_str();  }

UINT32 Error::GetLineNumber() const
{	return m_lineNumber;  }

const ErrorBase* Error::GetOriginatingObject() const
{	return m_originatingObject;  }

double Error::GetTime() const
{	return m_timestamp;  }

void Error::Set(Code code, const char* contextMessage, const char* filename, const char* function, UINT32 lineNumber, const ErrorBase* originatingObject)
{
	m_code = code;
	m_message = contextMessage;
	m_filename = filename;
	m_function = function;
	m_lineNumber = lineNumber;
	m_originatingObject = originatingObject;
	m_timestamp = GetTime();

	Report();

	if (m_suspendOnErrorEnabled) taskSuspend(0);
}

void Error::Report()
{
	// Error string buffers
	char *error = new char[256];
	char *error_with_code = new char[256];

	// Build error strings
	if (m_code != -1)
	{
		snprintf(error, 256, "%s: status = %d (0x%08X) %s ...in %s() in %s at line %d\n",
				m_code < 0 ? "ERROR" : "WARNING", (INT32)m_code, (UINT32)m_code, m_message.c_str(),
				m_function.c_str(), m_filename.c_str(), m_lineNumber);
		sprintf(error_with_code,"<Code>%d %s", (INT32)m_code, error);
	} else {
		snprintf(error, 256, "ERROR: %s ...in %s() in %s at line %d\n", m_message.c_str(),
				m_function.c_str(), m_filename.c_str(), m_lineNumber);
		strcpy(error_with_code, error);
	}
	// TODO: Add logging to disk

	// Send to the DriverStation
	setErrorData(error_with_code, strlen(error_with_code), 100);

	delete [] error_with_code;

	// Print to console
	printf("\n\n>>>>%s", error);

	delete [] error;

#if ! defined(DISABLE_STACK_TRACE)
	if (m_stackTraceEnabled)
	{
		printf("-----------<Stack Trace>----------------\n");
		wpi_selfTrace();
	}
#endif
}

void Error::Clear()
{
	m_code = 0;
	m_message = "";
	m_filename = "";
	m_function = "";
	m_lineNumber = 0;
	m_originatingObject = NULL;
	m_timestamp = 0.0;
}

