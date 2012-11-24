/*
    WPILib Test Harness
    Copyright (C) 2009 Dustin Spicuzza <dustin@virtualroadside.com>
	
	$Id: SimulationData.cpp 305 2009-03-14 09:32:03Z dspicuzz $

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License v3 as published by
    the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <DigitalInput.h>
#include <DigitalOutput.h>
#include <Encoder.h>
#include <Gyro.h>
#include <Notifier.h>
#include <PWM.h>
#include <AnalogChannel.h>
#include <Solenoid.h>

#include "SimulationData.h"


void EncoderInfo::Transfer()
{
	/* JPW HACK for now encoder->m_count = count; */
}

void GyroInfo::Transfer()
{
	/* JPW HACK for now gyro->m_angle = angle; */
}

void DigitalIOData::Transfer()
{
    /* JPW HACK fo for now
	if (digitalInput)
		digitalInput->m_value = value;
	else if (digitalOutput)
		value = digitalOutput->m_value;
    */
}

void PWMData::Transfer()
{
    /* JPW HACK fo rnow 
	if (pwm) speed = pwm->m_speed;
    */
}

void RelayData::Transfer()
{

}

void AnalogIOData::Transfer()
{
    /* JPW HACK fo rnow 
	if (analogChannel)
		analogChannel->m_value = value;
    */
}

void SolenoidData::Transfer()
{
    /* JPW HACK fo rnow 
	if (solenoid)
		value = solenoid->m_value;
    */
}
