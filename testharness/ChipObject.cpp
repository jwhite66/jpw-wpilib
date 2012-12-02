#include <stdio.h>
#include "NiFpga.h"
#include "Error.h"
#include "tAccumulator.h"
#include "tAI.h"
#include "tDIO.h"
#include "tInterrupt.h"
#include "tWatchdog.h"
#include "tSystem.h"
#include "tInterruptManager.h"

namespace nFPGA
{
    namespace nFRC_2012_1_6_4
    {
        tAccumulator* tAccumulator::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }

        class AIImpl : public tAI
        {
            public:
                ~AIImpl(){ UN_VOID }
                tSystemInterface* getSystemInterface()  { UN_NULL }
                unsigned char getSystemIndex()  { UN_ZERO }
                void writeConfig(tConfig value, tRioStatusCode *status)  { UN_VOID }
                void writeConfig_ScanSize(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeConfig_ConvertRate(unsigned int value, tRioStatusCode *status)  { UN_VOID }
                tConfig readConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_config;
                }
                unsigned char readConfig_ScanSize(tRioStatusCode *status)  { UN_ZERO }
                unsigned int readConfig_ConvertRate(tRioStatusCode *status)  { UN_ZERO }
                void writeScanList(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readScanList(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                unsigned int readLoopTiming(tRioStatusCode *status)  { UN_ZERO }
                void writeAverageBits(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readAverageBits(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeOversampleBits(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readOversampleBits(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                signed int readOutput(tRioStatusCode *status)  { UN_ZERO }
                void writeReadSelect(tReadSelect value, tRioStatusCode *status)  { UN_VOID }
                void writeReadSelect_Channel(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeReadSelect_Module(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeReadSelect_Averaged(bool value, tRioStatusCode *status)  { UN_VOID }
                tReadSelect readReadSelect(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_select;
                }
                unsigned char readReadSelect_Channel(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readReadSelect_Module(tRioStatusCode *status)  { UN_ZERO }
                bool readReadSelect_Averaged(tRioStatusCode *status)  { UN_ZERO }
                void strobeLatchOutput(tRioStatusCode *status)  { UN_VOID}

            protected:
                tConfig m_config;
                tReadSelect m_select;
        };

        tAI* tAI::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return new AIImpl;
        }

        class DIOImpl : public tDIO
        {
            public:
                ~DIOImpl() { UN_VOID }
                tSystemInterface* getSystemInterface()  { UN_NULL }
                unsigned char getSystemIndex()  { UN_ZERO }
                void writeI2CDataToSend(unsigned int value, tRioStatusCode *status)  { UN_VOID }
                unsigned int readI2CDataToSend(tRioStatusCode *status)  { UN_ZERO }
                void writeDO(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                unsigned short readDO(tRioStatusCode *status)  { UN_ZERO }
                void writeFilterSelect(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readFilterSelect(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeFilterPeriod(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readFilterPeriod(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeOutputEnable(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                unsigned short readOutputEnable(tRioStatusCode *status)  { UN_ZERO }
                void writeSlowValue(tSlowValue value, tRioStatusCode *status)  { UN_VOID }
                void writeSlowValue_RelayFwd(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeSlowValue_RelayRev(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeSlowValue_I2CHeader(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                tSlowValue readSlowValue(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_slowvalue;
                }
                unsigned char readSlowValue_RelayFwd(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readSlowValue_RelayRev(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readSlowValue_I2CHeader(tRioStatusCode *status)  { UN_ZERO }
                tI2CStatus readI2CStatus(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_i2cstatus;
                }
                unsigned char readI2CStatus_Transaction(tRioStatusCode *status)  { UN_ZERO }
                bool readI2CStatus_Done(tRioStatusCode *status)  { UN_ZERO }
                bool readI2CStatus_Aborted(tRioStatusCode *status)  { UN_ZERO }
                unsigned int readI2CStatus_DataReceivedHigh(tRioStatusCode *status)  { UN_ZERO }
                unsigned int readI2CDataReceived(tRioStatusCode *status)  { UN_ZERO }
                unsigned short readDI(tRioStatusCode *status)  { UN_ZERO }
                void writePulse(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                unsigned short readPulse(tRioStatusCode *status)  { UN_ZERO }
                void writePWMPeriodScale(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readPWMPeriodScale(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeDO_PWMDutyCycle(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readDO_PWMDutyCycle(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeBFL(bool value, tRioStatusCode *status)  { UN_VOID }
                bool readBFL(tRioStatusCode *status)  { UN_ZERO }
                void strobeI2CStart(tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig(tDO_PWMConfig value, tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig_PeriodPower(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig_OutputSelect_0(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig_OutputSelect_1(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig_OutputSelect_2(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeDO_PWMConfig_OutputSelect_3(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                tDO_PWMConfig readDO_PWMConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_dopwmconfig;
                }
                unsigned char readDO_PWMConfig_PeriodPower(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readDO_PWMConfig_OutputSelect_0(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readDO_PWMConfig_OutputSelect_1(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readDO_PWMConfig_OutputSelect_2(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readDO_PWMConfig_OutputSelect_3(tRioStatusCode *status)  { UN_ZERO }
                void writePulseLength(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readPulseLength(tRioStatusCode *status)  { UN_ZERO }
                void writeI2CConfig(tI2CConfig value, tRioStatusCode *status)  { UN_VOID }
                void writeI2CConfig_Address(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeI2CConfig_BytesToRead(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeI2CConfig_BytesToWrite(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeI2CConfig_DataToSendHigh(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                void writeI2CConfig_BitwiseHandshake(bool value, tRioStatusCode *status)  { UN_VOID }
                tI2CConfig readI2CConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_i2cconfig;
                }
                unsigned char readI2CConfig_Address(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readI2CConfig_BytesToRead(tRioStatusCode *status)  { UN_ZERO }
                unsigned char readI2CConfig_BytesToWrite(tRioStatusCode *status)  { UN_ZERO }
                unsigned short readI2CConfig_DataToSendHigh(tRioStatusCode *status)  { UN_ZERO }
                bool readI2CConfig_BitwiseHandshake(tRioStatusCode *status)  { UN_ZERO }
                unsigned short readLoopTiming(tRioStatusCode *status)  { UN_ZERO }
                void writePWMConfig(tPWMConfig value, tRioStatusCode *status)  { UN_VOID }
                void writePWMConfig_Period(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                void writePWMConfig_MinHigh(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                tPWMConfig readPWMConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_pwmconfig;
                }
                unsigned short readPWMConfig_Period(tRioStatusCode *status)  { UN_ZERO }
                unsigned short readPWMConfig_MinHigh(tRioStatusCode *status)  { UN_ZERO }
                void writePWMValue(unsigned char reg_index, unsigned char value, tRioStatusCode *status)  { UN_VOID }
                unsigned char readPWMValue(unsigned char reg_index, tRioStatusCode *status)  { UN_ZERO }

            protected:
                tI2CStatus m_i2cstatus;
                tSlowValue m_slowvalue;
                tDO_PWMConfig m_dopwmconfig;
                tI2CConfig m_i2cconfig;
                tPWMConfig m_pwmconfig;
        };

        tDIO* tDIO::create (unsigned char sys_index, tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return new DIOImpl;
        }

        tInterrupt* tInterrupt::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }

        class WatchDogImpl : public tWatchdog
        {
            public:
               tSystemInterface* getSystemInterface() { UN_NULL }
               tStatus readStatus(tRioStatusCode *status) { UN_FPRINTF; return m_status; }
               bool readStatus_SystemActive(tRioStatusCode *status) { UN_ZERO }
               bool readStatus_Alive(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_SysDisableCount(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_DisableCount(tRioStatusCode *status){ UN_ZERO }
               void writeImmortal(bool value, tRioStatusCode *status){UN_VOID}
               bool readImmortal(tRioStatusCode *status){ UN_ZERO }
               void strobeKill(tRioStatusCode *status){UN_VOID}
               void strobeFeed(tRioStatusCode *status){UN_VOID}
               void writeExpiration(unsigned int value, tRioStatusCode *status){UN_VOID}
               unsigned int readExpiration(tRioStatusCode *status){ UN_ZERO }
               unsigned int readTimer(tRioStatusCode *status){ UN_ZERO }

            protected:
              tStatus m_status;
        };

        tWatchdog* tWatchdog::create(tRioStatusCode *status)
        {
            fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __FUNCTION__);
            return new WatchDogImpl;
        }
    }

    tSystem::tSystem(tRioStatusCode *status) { UN_VOID }
    tSystem::~tSystem() { UN_VOID }

    tInterruptManager::tInterruptManager(uint32_t interruptMask, bool watcher, tRioStatusCode *status) : tSystem(status) { UN_VOID }
    tInterruptManager::~tInterruptManager() { UN_VOID }
    void tInterruptManager::registerHandler(tInterruptHandler handler, void *param, tRioStatusCode *status) { UN_VOID }
    uint32_t tInterruptManager::tInterruptManager::watch(int32_t timeoutInMs, tRioStatusCode *status) { UN_ZERO }
    void tInterruptManager::enable(tRioStatusCode *status) { UN_VOID }
    void tInterruptManager::disable(tRioStatusCode *status) { UN_VOID }
    bool tInterruptManager::isEnabled(tRioStatusCode *status){ UN_ZERO }
}
