all: obj/testharness.a obj/App

TOP_DIR=..
include ../Make.rules

CORE_SOURCES=App.cpp MotorDisplay.cpp \
        SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp
HARNESS_SOURCES=CAN.cpp ChipObject.cpp NetworkCommunication.cpp UsageReporting.cpp

SOURCES=$(CORE_SOURCES) $(HARNESS_SOURCES)
TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/testharness.a:  $(OBJECTS)
	ar rs $@ $^

obj/App:  $(CORE_SOURCES)
	g++ $(CFLAGS) -DSTANDALONE $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) $(VXSIM_INCLUDES) $(EXTRA_CFLAGS) -o "$@" $^ $(WX_LDFLAGS)

# Auto generated lines by 'make depend'
# DO NOT DELETE

obj/App.o: SimulationWindow.h ControlInterface.h ../vxsim/vxWorks.h
obj/App.o: ../vxsim/semLib.h ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/App.o: SimulationData.h MotorDisplay.h Slider.h TogglePanelButton.h
obj/MotorDisplay.o: MotorDisplay.h
obj/SimulationData.o: ../rbmj-wpilib/DigitalInput.h
obj/SimulationData.o: ../rbmj-wpilib/DigitalSource.h
obj/SimulationData.o: ../rbmj-wpilib/InterruptableSensorBase.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject.h ../vxsim/vxWorks.h
obj/SimulationData.o: ../vxsim/semLib.h ../rbmj-wpilib/ChipObject/NiRio.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/NiFpga.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tAccumulator.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tSystemInterface.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tAI.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tAlarm.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tAnalogTrigger.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tCounter.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tDIO.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tDMA.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tEncoder.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tGlobal.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tInterrupt.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tInterruptManager.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/NiRio.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tSystem.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tSolenoid.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tSPI.h
obj/SimulationData.o: ../rbmj-wpilib/ChipObject/tWatchdog.h
obj/SimulationData.o: ../rbmj-wpilib/SensorBase.h ../rbmj-wpilib/ErrorBase.h
obj/SimulationData.o: ../rbmj-wpilib/Base.h ../rbmj-wpilib/Error.h
obj/SimulationData.o: ../rbmj-wpilib/DigitalOutput.h ../rbmj-wpilib/Encoder.h
obj/SimulationData.o: ../rbmj-wpilib/CounterBase.h ../rbmj-wpilib/Counter.h
obj/SimulationData.o: ../rbmj-wpilib/AnalogTriggerOutput.h
obj/SimulationData.o: ../rbmj-wpilib/PIDSource.h ../rbmj-wpilib/Gyro.h
obj/SimulationData.o: ../rbmj-wpilib/Notifier.h ../rbmj-wpilib/PWM.h
obj/SimulationData.o: ../rbmj-wpilib/AnalogChannel.h
obj/SimulationData.o: ../rbmj-wpilib/Solenoid.h ../rbmj-wpilib/SolenoidBase.h
obj/SimulationData.o: ../rbmj-wpilib/Resource.h SimulationData.h
obj/SimulationWindow.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/SimulationWindow.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/SimulationWindow.o: SimulationWindow.h ControlInterface.h
obj/SimulationWindow.o: SimulationData.h MotorDisplay.h Slider.h
obj/SimulationWindow.o: TogglePanelButton.h Simulator.h
obj/Simulator.o: Simulator.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Simulator.o: ControlInterface.h
obj/Simulator.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/Simulator.o: SimulationData.h
obj/Simulator.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/Simulator.o: ../rbmj-wpilib/DigitalInput.h ../rbmj-wpilib/DigitalSource.h
obj/Simulator.o: ../rbmj-wpilib/InterruptableSensorBase.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/NiRio.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/NiFpga.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tAccumulator.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tSystemInterface.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tAI.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tAlarm.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tAnalogTrigger.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tCounter.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tDIO.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tDMA.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tEncoder.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tGlobal.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tInterrupt.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tInterruptManager.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/NiRio.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tSystem.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tSolenoid.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tSPI.h
obj/Simulator.o: ../rbmj-wpilib/ChipObject/tWatchdog.h
obj/Simulator.o: ../rbmj-wpilib/SensorBase.h ../rbmj-wpilib/ErrorBase.h
obj/Simulator.o: ../rbmj-wpilib/Base.h ../rbmj-wpilib/Error.h
obj/Simulator.o: ../rbmj-wpilib/Encoder.h ../rbmj-wpilib/CounterBase.h
obj/Simulator.o: ../rbmj-wpilib/Counter.h
obj/Simulator.o: ../rbmj-wpilib/AnalogTriggerOutput.h
obj/Simulator.o: ../rbmj-wpilib/PIDSource.h ../rbmj-wpilib/Gyro.h
obj/Simulator.o: ../rbmj-wpilib/Notifier.h ../rbmj-wpilib/PWM.h
obj/Simulator.o: ../rbmj-wpilib/RobotBase.h ../rbmj-wpilib/Task.h
obj/Simulator.o: ../rbmj-wpilib/Watchdog.h
obj/Slider.o: Slider.h
obj/TogglePanelButton.o: TogglePanelButton.h
obj/CAN.o: ../rbmj-wpilib/CAN/JaguarCANDriver.h ../vxsim/vxWorks.h
obj/CAN.o: ../vxsim/semLib.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/NiFpga.h ../rbmj-wpilib/Error.h
obj/ChipObject.o: ../rbmj-wpilib/Base.h ../rbmj-wpilib/ChipObject/NiRio.h
obj/ChipObject.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAccumulator.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tSystemInterface.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAI.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tDIO.h
obj/ChipObject.o: ../rbmj-wpilib/DigitalModule.h ../rbmj-wpilib/Module.h
obj/ChipObject.o: ../rbmj-wpilib/SensorBase.h ../rbmj-wpilib/ErrorBase.h
obj/ChipObject.o: ../rbmj-wpilib/NetworkCommunication/LoadOut.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAccumulator.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAI.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAlarm.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tAnalogTrigger.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tCounter.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tDIO.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tDMA.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tEncoder.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tGlobal.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tInterrupt.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tInterruptManager.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/NiRio.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tSystem.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tSolenoid.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tSPI.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tWatchdog.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tInterrupt.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tWatchdog.h
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tInterruptManager.h
obj/ChipObject.o: SimulationData.h Simulator.h ControlInterface.h
obj/ChipObject.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/ChipObject.o: ../rbmj-wpilib/PWM.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/AICalibration.h
obj/NetworkCommunication.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/LoadOut.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/symModuleLink.h
obj/UsageReporting.o: ../rbmj-wpilib/NetworkCommunication/UsageReporting.h
obj/UsageReporting.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
