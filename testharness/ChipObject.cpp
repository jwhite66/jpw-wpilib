#include <stdio.h>
#include <signal.h>
#include <vector>
#include <sys/time.h>
#include "NiFpga.h"
#include "Error.h"
#include "tAccumulator.h"
#include "tAI.h"
#include "tDIO.h"
#include "DigitalModule.h"
#include "tInterrupt.h"
#include "tWatchdog.h"
#include "tSystem.h"
#include "tInterruptManager.h"
#include "Simulator.h"
#include "PWM.h"

struct analog_info
{
    unsigned char scanlist_value;
    unsigned char average_bits;
    unsigned char oversample_bits;
};

struct pwm_info
{
    unsigned char value;
    unsigned char period_scale;
};

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
                void writeConfig(tConfig value, tRioStatusCode *status)
                {
                    m_config = value;
                }
                void writeConfig_ScanSize(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                void writeConfig_ConvertRate(unsigned int value, tRioStatusCode *status)  { UN_VOID }
                tConfig readConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_config;
                }
                unsigned char readConfig_ScanSize(tRioStatusCode *status)  { UN_ZERO }
                unsigned int readConfig_ConvertRate(tRioStatusCode *status)  { UN_ZERO }
                void writeScanList(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)
                {
                    bitfields[bitfield_index].scanlist_value = value;
                }
                unsigned char readScanList(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                unsigned int readLoopTiming(tRioStatusCode *status) { UN_ZERO }
                void writeAverageBits(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)
                {
                    bitfields[bitfield_index].average_bits = value;
                }
                unsigned char readAverageBits(unsigned char bitfield_index, tRioStatusCode *status)  { UN_ZERO }
                void writeOversampleBits(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)
                {
                    bitfields[bitfield_index].oversample_bits = value;
                }
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

                struct analog_info bitfields[8];
        };

        tAI* tAI::create (unsigned char sys_index, tRioStatusCode *status)
        {
            if (LOG_DEBUG)
                fprintf(stderr, "%s(%d): %s tAI %d Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, sys_index);
            return new AIImpl;
        }

        class DIOImpl : public tDIO
        {
            public:
                DIOImpl() : m_readdi_warned(false) {};
                ~DIOImpl() { UN_VOID }
                tSystemInterface* getSystemInterface()  { UN_NULL }
                unsigned char getSystemIndex()  { return m_index; }
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
                void writeSlowValue_RelayFwd(unsigned char value, tRioStatusCode *status)
                {
                    m_slowvalue.RelayFwd = value;
                }
                void writeSlowValue_RelayRev(unsigned char value, tRioStatusCode *status)
                {
                    m_slowvalue.RelayRev = value;
                }
                void writeSlowValue_I2CHeader(unsigned char value, tRioStatusCode *status)  { UN_VOID }
                tSlowValue readSlowValue(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_slowvalue;
                }
                unsigned char readSlowValue_RelayFwd(tRioStatusCode *status)
                {
                    return (unsigned char) m_slowvalue.RelayFwd;
                }

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
                unsigned short readDI(tRioStatusCode *status)
                {
                    if (! m_readdi_warned)
                    {
                        UN_FPRINTF
                        m_readdi_warned = true;
                    }
                    return 0;
                }
                void writePulse(unsigned short value, tRioStatusCode *status)  { UN_VOID }
                unsigned short readPulse(tRioStatusCode *status)  { UN_ZERO }
                void writePWMPeriodScale(unsigned char bitfield_index, unsigned char value, tRioStatusCode *status)
                {
                    m_pwmdata[bitfield_index].period_scale = value;
                }
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
                unsigned short readLoopTiming(tRioStatusCode *status)
                {
                    if (LOG_DEBUG)
                        fprintf(stderr, "%s(%d): %s Hard coded / UNIMPLEMENTED\n", __FILE__, __LINE__, __PRETTY_FUNCTION__);
                    return kExpectedLoopTiming;
                }
                void writePWMConfig(tPWMConfig value, tRioStatusCode *status) { UN_VOID }
                void writePWMConfig_Period(unsigned short value, tRioStatusCode *status)
                {
                    m_pwmconfig.Period = value;
                }
                void writePWMConfig_MinHigh(unsigned short value, tRioStatusCode *status)
                {
                    m_pwmconfig.MinHigh = value;
                }
                tPWMConfig readPWMConfig(tRioStatusCode *status)
                {
                    UN_FPRINTF
                    return m_pwmconfig;
                }
                unsigned short readPWMConfig_Period(tRioStatusCode *status)  { UN_ZERO }
                unsigned short readPWMConfig_MinHigh(tRioStatusCode *status)  { UN_ZERO }
                void writePWMValue(unsigned char reg_index, unsigned char value, tRioStatusCode *status)
                {
                    m_pwmdata[reg_index].value = value;
                    // TODO - signal this to the UI
                }
                unsigned char readPWMValue(unsigned char reg_index, tRioStatusCode *status)  { UN_ZERO }

                void create_impl(unsigned char sys_index, tRioStatusCode *status)
                {
                    m_index = sys_index;
                }

            protected:
                unsigned char m_index;
                bool m_readdi_warned;

                tI2CStatus m_i2cstatus;
                tSlowValue m_slowvalue;
                tDO_PWMConfig m_dopwmconfig;
                tI2CConfig m_i2cconfig;
                tPWMConfig m_pwmconfig;
                struct pwm_info m_pwmdata[10];
        };

        tDIO* tDIO::create (unsigned char sys_index, tRioStatusCode *status)
        {
            DIOImpl *p = new DIOImpl;
            if (LOG_DEBUG)
                fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED, index %d\n", __FILE__, __LINE__, __PRETTY_FUNCTION__, sys_index);
            p->create_impl(sys_index, status);
            return p;
        }

        tInterrupt* tInterrupt::create (unsigned char sys_index, tRioStatusCode *status) { UN_NULL }

        class WatchDogImpl : public tWatchdog
        {
            public:
                WatchDogImpl()
                {
                    gettimeofday(&m_tv, NULL);
                }
               tSystemInterface* getSystemInterface() { UN_NULL }
               tStatus readStatus(tRioStatusCode *status) { UN_FPRINTF; return m_status; }
               bool readStatus_SystemActive(tRioStatusCode *status) { UN_ZERO }
               bool readStatus_Alive(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_SysDisableCount(tRioStatusCode *status){ UN_ZERO }
               unsigned short readStatus_DisableCount(tRioStatusCode *status){ UN_ZERO }
               void writeImmortal(bool value, tRioStatusCode *status)
               {
                   m_immortal = value;
               }
               bool readImmortal(tRioStatusCode *status){ UN_ZERO }
               void strobeKill(tRioStatusCode *status){UN_VOID}
               void strobeFeed(tRioStatusCode *status){UN_VOID}
               void writeExpiration(unsigned int value, tRioStatusCode *status)
               {
                   if (LOG_WARN)
                       fprintf(stderr, "WatchDog Expiration set, but no mechanism to trigger.\n");
                   m_expiration = value;
               }
               unsigned int readExpiration(tRioStatusCode *status){ UN_ZERO }
               unsigned int readTimer(tRioStatusCode *status){ UN_ZERO }

            protected:
              tStatus m_status;
              unsigned int m_expiration;
              bool m_immortal;
              struct timeval m_tv;
        };

        tWatchdog* tWatchdog::create(tRioStatusCode *status)
        {
            if (LOG_WARN)
                fprintf(stderr, "%s(%d): %s Mostly UNIMPLEMENTED\n", __FILE__, __LINE__, __PRETTY_FUNCTION__);
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
