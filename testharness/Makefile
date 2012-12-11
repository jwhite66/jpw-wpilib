all: obj/testconsole.a

TOP_DIR=..
include ../Make.rules

CORE_SOURCES=Simulator.cpp CAN.cpp ChipObject.cpp NetworkCommunication.cpp UsageReporting.cpp
WX_SOURCES=App.cpp MotorDisplay.cpp SimulationWindow.cpp Slider.cpp TogglePanelButton.cpp
CMDLINE_SOURCES=console.cpp

SOURCES=$(CORE_SOURCES) $(WX_SOURCES) $(CMDLINE_SOURCES)

GUI_SOURCES=$(CORE_SOURCES) $(WX_SOURCES)
TRIM_GUI_SOURCES=$(strip $(GUI_SOURCES))
GUI_OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_GUI_SOURCES))

CONSOLE_SOURCES=$(CORE_SOURCES) $(CMDLINE_SOURCES)
TRIM_CONSOLE_SOURCES=$(strip $(CONSOLE_SOURCES))
CONSOLE_OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_CONSOLE_SOURCES))

obj/testgui.a:  $(GUI_OBJECTS)
	ar rs $@ $^

obj/testconsole.a:  $(CONSOLE_OBJECTS)
	ar rs $@ $^

# Auto generated lines by 'make depend'
# DO NOT DELETE

obj/Simulator.o: Simulator.h ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/Simulator.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
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
obj/ChipObject.o: ../rbmj-wpilib/ChipObject/tInterruptManager.h Simulator.h
obj/ChipObject.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/ChipObject.o: ../rbmj-wpilib/PWM.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/AICalibration.h
obj/NetworkCommunication.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/LoadOut.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/symModuleLink.h
obj/NetworkCommunication.o: Simulator.h
obj/NetworkCommunication.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/UsageReporting.o: ../rbmj-wpilib/NetworkCommunication/UsageReporting.h
obj/UsageReporting.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/App.o: SimulationWindow.h MotorDisplay.h Slider.h TogglePanelButton.h
obj/MotorDisplay.o: MotorDisplay.h
obj/SimulationWindow.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/SimulationWindow.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/SimulationWindow.o: SimulationWindow.h MotorDisplay.h Slider.h
obj/SimulationWindow.o: TogglePanelButton.h Simulator.h
obj/SimulationWindow.o: ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/Slider.o: Slider.h
obj/TogglePanelButton.o: TogglePanelButton.h
obj/console.o: Simulator.h ../rbmj-wpilib/NetworkCommunication/FRCComm.h
obj/console.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
