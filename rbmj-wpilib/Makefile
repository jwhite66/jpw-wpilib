all: obj/wpilib.a

EXTRA_CFLAGS=-DDISABLE_STACK_TRACE -DDISABLE_GETPPCTIMESTAMP

TOP_DIR=..
include ../Make.rules

SOURCES=\
    Accelerometer.cpp\
    ADXL345_I2C.cpp\
    ADXL345_SPI.cpp\
    AnalogChannel.cpp\
    AnalogModule.cpp\
    AnalogTrigger.cpp\
    AnalogTriggerOutput.cpp\
    CANJaguar.cpp\
    Compressor.cpp\
    Counter.cpp\
    Dashboard.cpp\
    DigitalInput.cpp\
    DigitalModule.cpp\
    DigitalOutput.cpp\
    DigitalSource.cpp\
    DoubleSolenoid.cpp\
    DriverStation.cpp\
    DriverStationEnhancedIO.cpp\
    DriverStationLCD.cpp\
    Encoder.cpp\
    ErrorBase.cpp\
    Error.cpp\
    GearTooth.cpp\
    Gyro.cpp\
    HiTechnicCompass.cpp\
    I2C.cpp\
    InterruptableSensorBase.cpp\
    IterativeRobot.cpp\
    Jaguar.cpp\
    Joystick.cpp\
    Kinect.cpp\
    KinectStick.cpp\
    Module.cpp\
    MotorSafetyHelper.cpp\
    Notifier.cpp\
    PIDController.cpp\
    Preferences.cpp\
    PWM.cpp\
    Relay.cpp\
    Resource.cpp\
    RobotBase.cpp\
    RobotDrive.cpp\
    SafePWM.cpp\
    SensorBase.cpp\
    SerialPort.cpp\
    Servo.cpp\
    SimpleRobot.cpp\
    SolenoidBase.cpp\
    Solenoid.cpp\
    SPI.cpp\
    Synchronized.cpp\
    Task.cpp\
    Timer.cpp\
    Ultrasonic.cpp\
    Victor.cpp\
    Watchdog.cpp

#Utility.cpp\

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/wpilib.a:  $(OBJECTS)
	ar rs $@ $^

# Auto generated lines by 'make depend'
# DO NOT DELETE

obj/Accelerometer.o: Accelerometer.h AnalogChannel.h ChipObject.h
obj/Accelerometer.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ChipObject/NiRio.h
obj/Accelerometer.o: ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/Accelerometer.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/Accelerometer.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Accelerometer.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/Accelerometer.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Accelerometer.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Accelerometer.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Accelerometer.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/Accelerometer.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/Accelerometer.o: ErrorBase.h Base.h Error.h PIDSource.h AnalogModule.h
obj/Accelerometer.o: Module.h NetworkCommunication/LoadOut.h
obj/Accelerometer.o: NetworkCommunication/UsageReporting.h WPIErrors.h
obj/ADXL345_I2C.o: ADXL345_I2C.h SensorBase.h ChipObject/NiRio.h
obj/ADXL345_I2C.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/ADXL345_I2C.o: ../vxsim/vxWorks.h ../vxsim/semLib.h DigitalModule.h
obj/ADXL345_I2C.o: Module.h NetworkCommunication/LoadOut.h ChipObject.h
obj/ADXL345_I2C.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/ADXL345_I2C.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/ADXL345_I2C.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/ADXL345_I2C.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/ADXL345_I2C.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/ADXL345_I2C.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/ADXL345_I2C.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/ADXL345_I2C.o: ChipObject/tSPI.h ChipObject/tWatchdog.h
obj/ADXL345_I2C.o: NetworkCommunication/UsageReporting.h I2C.h
obj/ADXL345_SPI.o: ADXL345_SPI.h SensorBase.h ChipObject/NiRio.h
obj/ADXL345_SPI.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/ADXL345_SPI.o: ../vxsim/vxWorks.h ../vxsim/semLib.h DigitalInput.h
obj/ADXL345_SPI.o: DigitalSource.h InterruptableSensorBase.h ChipObject.h
obj/ADXL345_SPI.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/ADXL345_SPI.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/ADXL345_SPI.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/ADXL345_SPI.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/ADXL345_SPI.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/ADXL345_SPI.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/ADXL345_SPI.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/ADXL345_SPI.o: ChipObject/tSPI.h ChipObject/tWatchdog.h DigitalOutput.h
obj/ADXL345_SPI.o: NetworkCommunication/UsageReporting.h SPI.h
obj/AnalogChannel.o: AnalogChannel.h ChipObject.h ../vxsim/vxWorks.h
obj/AnalogChannel.o: ../vxsim/semLib.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/AnalogChannel.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/AnalogChannel.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/AnalogChannel.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/AnalogChannel.o: ChipObject/tDIO.h ChipObject/tDMA.h
obj/AnalogChannel.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/AnalogChannel.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/AnalogChannel.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/AnalogChannel.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/AnalogChannel.o: ChipObject/tWatchdog.h SensorBase.h ErrorBase.h Base.h
obj/AnalogChannel.o: Error.h PIDSource.h AnalogModule.h Module.h
obj/AnalogChannel.o: NetworkCommunication/LoadOut.h
obj/AnalogChannel.o: NetworkCommunication/UsageReporting.h Resource.h
obj/AnalogChannel.o: WPIErrors.h
obj/AnalogModule.o: AnalogModule.h ChipObject.h ../vxsim/vxWorks.h
obj/AnalogModule.o: ../vxsim/semLib.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/AnalogModule.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/AnalogModule.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/AnalogModule.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/AnalogModule.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/AnalogModule.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/AnalogModule.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/AnalogModule.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/AnalogModule.o: ChipObject/tSPI.h ChipObject/tWatchdog.h Module.h
obj/AnalogModule.o: SensorBase.h ErrorBase.h Base.h Error.h
obj/AnalogModule.o: NetworkCommunication/LoadOut.h Synchronized.h Timer.h
obj/AnalogModule.o: WPIErrors.h NetworkCommunication/AICalibration.h
obj/AnalogTrigger.o: AnalogTrigger.h AnalogTriggerOutput.h DigitalSource.h
obj/AnalogTrigger.o: InterruptableSensorBase.h ChipObject.h
obj/AnalogTrigger.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ChipObject/NiRio.h
obj/AnalogTrigger.o: ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/AnalogTrigger.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/AnalogTrigger.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/AnalogTrigger.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/AnalogTrigger.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/AnalogTrigger.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/AnalogTrigger.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/AnalogTrigger.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/AnalogTrigger.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/AnalogTrigger.o: ErrorBase.h Base.h Error.h AnalogChannel.h PIDSource.h
obj/AnalogTrigger.o: AnalogModule.h Module.h NetworkCommunication/LoadOut.h
obj/AnalogTrigger.o: NetworkCommunication/UsageReporting.h Resource.h
obj/AnalogTrigger.o: WPIErrors.h
obj/AnalogTriggerOutput.o: AnalogTriggerOutput.h DigitalSource.h
obj/AnalogTriggerOutput.o: InterruptableSensorBase.h ChipObject.h
obj/AnalogTriggerOutput.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/AnalogTriggerOutput.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/AnalogTriggerOutput.o: ChipObject/tAccumulator.h
obj/AnalogTriggerOutput.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/AnalogTriggerOutput.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/AnalogTriggerOutput.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/AnalogTriggerOutput.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/AnalogTriggerOutput.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/AnalogTriggerOutput.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/AnalogTriggerOutput.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/AnalogTriggerOutput.o: ChipObject/tSPI.h ChipObject/tWatchdog.h
obj/AnalogTriggerOutput.o: SensorBase.h ErrorBase.h Base.h Error.h
obj/AnalogTriggerOutput.o: AnalogTrigger.h
obj/AnalogTriggerOutput.o: NetworkCommunication/UsageReporting.h WPIErrors.h
obj/CANJaguar.o: CANJaguar.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/CANJaguar.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/CANJaguar.o: ../vxsim/semLib.h MotorSafety.h MotorSafetyHelper.h
obj/CANJaguar.o: PIDOutput.h SpeedController.h ChipObject/NiFpga.h
obj/CANJaguar.o: CAN/JaguarCANDriver.h CAN/can_proto.h
obj/CANJaguar.o: NetworkCommunication/UsageReporting.h WPIErrors.h
obj/Compressor.o: Compressor.h SensorBase.h ChipObject/NiRio.h
obj/Compressor.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/Compressor.o: ../vxsim/vxWorks.h ../vxsim/semLib.h Relay.h Task.h
obj/Compressor.o: DigitalInput.h DigitalSource.h InterruptableSensorBase.h
obj/Compressor.o: ChipObject.h ChipObject/tAccumulator.h
obj/Compressor.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/Compressor.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Compressor.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/Compressor.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/Compressor.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/Compressor.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/Compressor.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Compressor.o: ChipObject/tWatchdog.h
obj/Compressor.o: NetworkCommunication/UsageReporting.h Timer.h WPIErrors.h
obj/Counter.o: Counter.h AnalogTriggerOutput.h DigitalSource.h
obj/Counter.o: InterruptableSensorBase.h ChipObject.h ../vxsim/vxWorks.h
obj/Counter.o: ../vxsim/semLib.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Counter.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Counter.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Counter.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Counter.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Counter.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Counter.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Counter.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Counter.o: ChipObject/tWatchdog.h SensorBase.h ErrorBase.h Base.h Error.h
obj/Counter.o: CounterBase.h AnalogTrigger.h DigitalInput.h
obj/Counter.o: NetworkCommunication/UsageReporting.h Resource.h WPIErrors.h
obj/Dashboard.o: Dashboard.h DashboardBase.h ../vxsim/vxWorks.h
obj/Dashboard.o: ../vxsim/semLib.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/Dashboard.o: ChipObject/NiFpga.h Error.h NetworkCommunication/FRCComm.h
obj/Dashboard.o: DriverStation.h DriverStationEnhancedIO.h SensorBase.h
obj/Dashboard.o: Task.h NetworkCommunication/UsageReporting.h Synchronized.h
obj/Dashboard.o: WPIErrors.h ../vxsim/strLib.h
obj/DigitalInput.o: DigitalInput.h DigitalSource.h InterruptableSensorBase.h
obj/DigitalInput.o: ChipObject.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/DigitalInput.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/DigitalInput.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/DigitalInput.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/DigitalInput.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/DigitalInput.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/DigitalInput.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/DigitalInput.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/DigitalInput.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/DigitalInput.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/DigitalInput.o: ErrorBase.h Base.h Error.h DigitalModule.h Module.h
obj/DigitalInput.o: NetworkCommunication/LoadOut.h
obj/DigitalInput.o: NetworkCommunication/UsageReporting.h Resource.h
obj/DigitalInput.o: WPIErrors.h
obj/DigitalModule.o: DigitalModule.h Module.h SensorBase.h ChipObject/NiRio.h
obj/DigitalModule.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/DigitalModule.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/DigitalModule.o: NetworkCommunication/LoadOut.h ChipObject.h
obj/DigitalModule.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/DigitalModule.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/DigitalModule.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/DigitalModule.o: ChipObject/tDIO.h ChipObject/tDMA.h
obj/DigitalModule.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/DigitalModule.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/DigitalModule.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/DigitalModule.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/DigitalModule.o: ChipObject/tWatchdog.h I2C.h PWM.h Resource.h
obj/DigitalModule.o: Synchronized.h WPIErrors.h ../vxsim/taskLib.h
obj/DigitalOutput.o: DigitalOutput.h DigitalSource.h
obj/DigitalOutput.o: InterruptableSensorBase.h ChipObject.h
obj/DigitalOutput.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ChipObject/NiRio.h
obj/DigitalOutput.o: ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/DigitalOutput.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/DigitalOutput.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/DigitalOutput.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/DigitalOutput.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/DigitalOutput.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/DigitalOutput.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/DigitalOutput.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/DigitalOutput.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/DigitalOutput.o: ErrorBase.h Base.h Error.h DigitalModule.h Module.h
obj/DigitalOutput.o: NetworkCommunication/LoadOut.h
obj/DigitalOutput.o: NetworkCommunication/UsageReporting.h Resource.h
obj/DigitalOutput.o: WPIErrors.h
obj/DigitalSource.o: DigitalSource.h InterruptableSensorBase.h ChipObject.h
obj/DigitalSource.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ChipObject/NiRio.h
obj/DigitalSource.o: ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/DigitalSource.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/DigitalSource.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/DigitalSource.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/DigitalSource.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/DigitalSource.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/DigitalSource.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/DigitalSource.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/DigitalSource.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/DigitalSource.o: ErrorBase.h Base.h Error.h
obj/DoubleSolenoid.o: DoubleSolenoid.h SolenoidBase.h Resource.h ErrorBase.h
obj/DoubleSolenoid.o: Base.h ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/DoubleSolenoid.o: ../vxsim/vxWorks.h ../vxsim/semLib.h SensorBase.h
obj/DoubleSolenoid.o: ChipObject.h ChipObject/tAccumulator.h
obj/DoubleSolenoid.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/DoubleSolenoid.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/DoubleSolenoid.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/DoubleSolenoid.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/DoubleSolenoid.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/DoubleSolenoid.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/DoubleSolenoid.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/DoubleSolenoid.o: ChipObject/tSPI.h ChipObject/tWatchdog.h
obj/DoubleSolenoid.o: NetworkCommunication/UsageReporting.h WPIErrors.h
obj/DriverStation.o: DriverStation.h Dashboard.h DashboardBase.h
obj/DriverStation.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ErrorBase.h Base.h
obj/DriverStation.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/DriverStation.o: NetworkCommunication/FRCComm.h DriverStationEnhancedIO.h
obj/DriverStation.o: SensorBase.h Task.h AnalogChannel.h ChipObject.h
obj/DriverStation.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/DriverStation.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/DriverStation.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/DriverStation.o: ChipObject/tDIO.h ChipObject/tDMA.h
obj/DriverStation.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/DriverStation.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/DriverStation.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/DriverStation.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/DriverStation.o: ChipObject/tWatchdog.h PIDSource.h Synchronized.h
obj/DriverStation.o: Timer.h NetworkCommunication/UsageReporting.h
obj/DriverStation.o: MotorSafetyHelper.h Utility.h ../vxsim/taskLib.h
obj/DriverStation.o: WPIErrors.h ../vxsim/strLib.h
obj/DriverStationEnhancedIO.o: DriverStationEnhancedIO.h ErrorBase.h Base.h
obj/DriverStationEnhancedIO.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/DriverStationEnhancedIO.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/DriverStationEnhancedIO.o: NetworkCommunication/FRCComm.h
obj/DriverStationEnhancedIO.o: NetworkCommunication/UsageReporting.h
obj/DriverStationEnhancedIO.o: Synchronized.h WPIErrors.h ../vxsim/strLib.h
obj/DriverStationLCD.o: DriverStationLCD.h SensorBase.h ChipObject/NiRio.h
obj/DriverStationLCD.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/DriverStationLCD.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/DriverStationLCD.o: NetworkCommunication/FRCComm.h
obj/DriverStationLCD.o: NetworkCommunication/UsageReporting.h Synchronized.h
obj/DriverStationLCD.o: WPIErrors.h ../vxsim/strLib.h
obj/Encoder.o: Encoder.h ChipObject.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Encoder.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Encoder.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Encoder.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Encoder.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Encoder.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Encoder.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Encoder.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Encoder.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Encoder.o: ChipObject/tWatchdog.h CounterBase.h SensorBase.h ErrorBase.h
obj/Encoder.o: Base.h Error.h Counter.h AnalogTriggerOutput.h DigitalSource.h
obj/Encoder.o: InterruptableSensorBase.h PIDSource.h DigitalInput.h
obj/Encoder.o: NetworkCommunication/UsageReporting.h Resource.h WPIErrors.h
obj/ErrorBase.o: ErrorBase.h Base.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/ErrorBase.o: Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h Synchronized.h
obj/ErrorBase.o: nivision.h WPIErrors.h ../vxsim/errnoLib.h ../vxsim/symLib.h
obj/ErrorBase.o: ../vxsim/sysSymTbl.h
obj/Error.o: Error.h Base.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Error.o: ../vxsim/vxWorks.h ../vxsim/semLib.h ../vxsim/taskLib.h
obj/Error.o: NetworkCommunication/FRCComm.h Timer.h Utility.h
obj/GearTooth.o: GearTooth.h Counter.h AnalogTriggerOutput.h DigitalSource.h
obj/GearTooth.o: InterruptableSensorBase.h ChipObject.h ../vxsim/vxWorks.h
obj/GearTooth.o: ../vxsim/semLib.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/GearTooth.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/GearTooth.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/GearTooth.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/GearTooth.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/GearTooth.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/GearTooth.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/GearTooth.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/GearTooth.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/GearTooth.o: ErrorBase.h Base.h Error.h CounterBase.h
obj/Gyro.o: Gyro.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Gyro.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Gyro.o: PIDSource.h AnalogChannel.h ChipObject.h
obj/Gyro.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Gyro.o: ChipObject/tAI.h ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Gyro.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/Gyro.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/Gyro.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/Gyro.o: ChipObject/NiRio.h ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/Gyro.o: ChipObject/tSPI.h ChipObject/tWatchdog.h AnalogModule.h Module.h
obj/Gyro.o: NetworkCommunication/LoadOut.h
obj/Gyro.o: NetworkCommunication/UsageReporting.h Timer.h WPIErrors.h
obj/HiTechnicCompass.o: HiTechnicCompass.h SensorBase.h ChipObject/NiRio.h
obj/HiTechnicCompass.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/HiTechnicCompass.o: ../vxsim/vxWorks.h ../vxsim/semLib.h DigitalModule.h
obj/HiTechnicCompass.o: Module.h NetworkCommunication/LoadOut.h ChipObject.h
obj/HiTechnicCompass.o: ChipObject/tAccumulator.h
obj/HiTechnicCompass.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/HiTechnicCompass.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/HiTechnicCompass.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/HiTechnicCompass.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/HiTechnicCompass.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/HiTechnicCompass.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/HiTechnicCompass.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/HiTechnicCompass.o: ChipObject/tSPI.h ChipObject/tWatchdog.h I2C.h
obj/HiTechnicCompass.o: WPIErrors.h
obj/I2C.o: I2C.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/I2C.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/I2C.o: DigitalModule.h Module.h NetworkCommunication/LoadOut.h
obj/I2C.o: ChipObject.h ChipObject/tAccumulator.h
obj/I2C.o: ChipObject/tSystemInterface.h ChipObject/tAI.h ChipObject/tAlarm.h
obj/I2C.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/I2C.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/I2C.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/I2C.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/I2C.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/I2C.o: ChipObject/tWatchdog.h NetworkCommunication/UsageReporting.h
obj/I2C.o: Synchronized.h WPIErrors.h ../vxsim/taskLib.h
obj/InterruptableSensorBase.o: InterruptableSensorBase.h ChipObject.h
obj/InterruptableSensorBase.o: ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/InterruptableSensorBase.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/InterruptableSensorBase.o: ChipObject/tAccumulator.h
obj/InterruptableSensorBase.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/InterruptableSensorBase.o: ChipObject/tAlarm.h
obj/InterruptableSensorBase.o: ChipObject/tAnalogTrigger.h
obj/InterruptableSensorBase.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/InterruptableSensorBase.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/InterruptableSensorBase.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/InterruptableSensorBase.o: ChipObject/tInterruptManager.h
obj/InterruptableSensorBase.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/InterruptableSensorBase.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/InterruptableSensorBase.o: ChipObject/tWatchdog.h SensorBase.h
obj/InterruptableSensorBase.o: ErrorBase.h Base.h Error.h Utility.h
obj/InterruptableSensorBase.o: ../vxsim/taskLib.h
obj/IterativeRobot.o: IterativeRobot.h Timer.h ../vxsim/semLib.h Base.h
obj/IterativeRobot.o: RobotBase.h Task.h ErrorBase.h ChipObject/NiRio.h
obj/IterativeRobot.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/IterativeRobot.o: Watchdog.h ChipObject.h ChipObject/tAccumulator.h
obj/IterativeRobot.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/IterativeRobot.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/IterativeRobot.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/IterativeRobot.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/IterativeRobot.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/IterativeRobot.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/IterativeRobot.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/IterativeRobot.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/IterativeRobot.o: DriverStation.h Dashboard.h DashboardBase.h
obj/IterativeRobot.o: NetworkCommunication/FRCComm.h
obj/IterativeRobot.o: DriverStationEnhancedIO.h
obj/IterativeRobot.o: NetworkCommunication/UsageReporting.h
obj/IterativeRobot.o: ../vxsim/taskLib.h
obj/Jaguar.o: Jaguar.h SafePWM.h MotorSafety.h PWM.h SensorBase.h
obj/Jaguar.o: ChipObject/NiRio.h ChipObject/NiFpga.h ErrorBase.h Base.h
obj/Jaguar.o: Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h SpeedController.h
obj/Jaguar.o: PIDOutput.h NetworkCommunication/UsageReporting.h
obj/Jaguar.o: DigitalModule.h Module.h NetworkCommunication/LoadOut.h
obj/Jaguar.o: ChipObject.h ChipObject/tAccumulator.h
obj/Jaguar.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/Jaguar.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Jaguar.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/Jaguar.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/Jaguar.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/Jaguar.o: ChipObject/NiRio.h ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/Jaguar.o: ChipObject/tSPI.h ChipObject/tWatchdog.h
obj/Joystick.o: Joystick.h GenericHID.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Joystick.o: ErrorBase.h Base.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Joystick.o: Error.h DriverStation.h Dashboard.h DashboardBase.h
obj/Joystick.o: NetworkCommunication/FRCComm.h DriverStationEnhancedIO.h
obj/Joystick.o: SensorBase.h Task.h NetworkCommunication/UsageReporting.h
obj/Joystick.o: WPIErrors.h
obj/Kinect.o: Kinect.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Kinect.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Kinect.o: Skeleton.h DriverStation.h Dashboard.h DashboardBase.h
obj/Kinect.o: NetworkCommunication/FRCComm.h DriverStationEnhancedIO.h Task.h
obj/Kinect.o: NetworkCommunication/UsageReporting.h Synchronized.h
obj/Kinect.o: WPIErrors.h
obj/KinectStick.o: KinectStick.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/KinectStick.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/KinectStick.o: ../vxsim/semLib.h GenericHID.h DriverStation.h Dashboard.h
obj/KinectStick.o: DashboardBase.h NetworkCommunication/FRCComm.h
obj/KinectStick.o: DriverStationEnhancedIO.h SensorBase.h Task.h Joystick.h
obj/KinectStick.o: NetworkCommunication/UsageReporting.h Utility.h
obj/KinectStick.o: ../vxsim/taskLib.h WPIErrors.h
obj/Module.o: Module.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Module.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Module.o: NetworkCommunication/LoadOut.h AnalogModule.h ChipObject.h
obj/Module.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Module.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Module.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Module.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Module.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Module.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Module.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Module.o: ChipObject/tWatchdog.h DigitalModule.h
obj/MotorSafetyHelper.o: MotorSafetyHelper.h ErrorBase.h Base.h
obj/MotorSafetyHelper.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/MotorSafetyHelper.o: ../vxsim/vxWorks.h ../vxsim/semLib.h DriverStation.h
obj/MotorSafetyHelper.o: Dashboard.h DashboardBase.h
obj/MotorSafetyHelper.o: NetworkCommunication/FRCComm.h
obj/MotorSafetyHelper.o: DriverStationEnhancedIO.h SensorBase.h Task.h
obj/MotorSafetyHelper.o: MotorSafety.h Synchronized.h Timer.h WPIErrors.h
obj/Notifier.o: Notifier.h ChipObject.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Notifier.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Notifier.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Notifier.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Notifier.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Notifier.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Notifier.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Notifier.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Notifier.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Notifier.o: ChipObject/tWatchdog.h ErrorBase.h Base.h Error.h
obj/Notifier.o: Synchronized.h Timer.h Utility.h ../vxsim/taskLib.h
obj/Notifier.o: WPIErrors.h
obj/PIDController.o: PIDController.h Base.h ../vxsim/semLib.h
obj/PIDController.o: NetworkCommunication/UsageReporting.h ../vxsim/vxWorks.h
obj/PIDController.o: Notifier.h ChipObject.h ChipObject/NiRio.h
obj/PIDController.o: ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/PIDController.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/PIDController.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/PIDController.o: ChipObject/tCounter.h ChipObject/tDIO.h
obj/PIDController.o: ChipObject/tDMA.h ChipObject/tEncoder.h
obj/PIDController.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/PIDController.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/PIDController.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/PIDController.o: ChipObject/tSPI.h ChipObject/tWatchdog.h ErrorBase.h
obj/PIDController.o: Error.h PIDSource.h PIDOutput.h Synchronized.h
obj/Preferences.o: Preferences.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/Preferences.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/Preferences.o: ../vxsim/semLib.h
obj/Preferences.o: NetworkTables/NetworkTableChangeListener.h
obj/Preferences.o: NetworkTables/InterfaceConstants.h Task.h
obj/Preferences.o: NetworkCommunication/UsageReporting.h
obj/Preferences.o: NetworkTables/NetworkTable.h Synchronized.h WPIErrors.h
obj/PWM.o: PWM.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/PWM.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/PWM.o: DigitalModule.h Module.h NetworkCommunication/LoadOut.h
obj/PWM.o: ChipObject.h ChipObject/tAccumulator.h
obj/PWM.o: ChipObject/tSystemInterface.h ChipObject/tAI.h ChipObject/tAlarm.h
obj/PWM.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/PWM.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/PWM.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/PWM.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/PWM.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/PWM.o: ChipObject/tWatchdog.h NetworkCommunication/UsageReporting.h
obj/PWM.o: Resource.h Utility.h ../vxsim/taskLib.h WPIErrors.h
obj/Relay.o: Relay.h SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Relay.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Relay.o: DigitalModule.h Module.h NetworkCommunication/LoadOut.h
obj/Relay.o: ChipObject.h ChipObject/tAccumulator.h
obj/Relay.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/Relay.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Relay.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/Relay.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/Relay.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/Relay.o: ChipObject/NiRio.h ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/Relay.o: ChipObject/tSPI.h ChipObject/tWatchdog.h
obj/Relay.o: NetworkCommunication/UsageReporting.h Resource.h WPIErrors.h
obj/Resource.o: Resource.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/Resource.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/Resource.o: ../vxsim/semLib.h WPIErrors.h
obj/RobotBase.o: RobotBase.h Base.h Task.h ErrorBase.h ChipObject/NiRio.h
obj/RobotBase.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/RobotBase.o: ../vxsim/semLib.h Watchdog.h ChipObject.h
obj/RobotBase.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/RobotBase.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/RobotBase.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/RobotBase.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/RobotBase.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/RobotBase.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/RobotBase.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/RobotBase.o: ChipObject/tSPI.h ChipObject/tWatchdog.h SensorBase.h
obj/RobotBase.o: DriverStation.h Dashboard.h DashboardBase.h
obj/RobotBase.o: NetworkCommunication/FRCComm.h DriverStationEnhancedIO.h
obj/RobotBase.o: NetworkCommunication/symModuleLink.h
obj/RobotBase.o: NetworkCommunication/UsageReporting.h Utility.h
obj/RobotBase.o: ../vxsim/taskLib.h ../vxsim/moduleLib.h ../vxsim/unldLib.h
obj/RobotDrive.o: RobotDrive.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/RobotDrive.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/RobotDrive.o: ../vxsim/semLib.h MotorSafety.h MotorSafetyHelper.h
obj/RobotDrive.o: CANJaguar.h PIDOutput.h SpeedController.h GenericHID.h
obj/RobotDrive.o: Joystick.h Jaguar.h SafePWM.h PWM.h SensorBase.h
obj/RobotDrive.o: NetworkCommunication/UsageReporting.h Utility.h
obj/RobotDrive.o: ../vxsim/taskLib.h WPIErrors.h
obj/SafePWM.o: SafePWM.h MotorSafety.h PWM.h SensorBase.h ChipObject/NiRio.h
obj/SafePWM.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/SafePWM.o: ../vxsim/vxWorks.h ../vxsim/semLib.h MotorSafetyHelper.h
obj/SensorBase.o: SensorBase.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/SensorBase.o: ErrorBase.h Base.h Error.h ../vxsim/vxWorks.h
obj/SensorBase.o: ../vxsim/semLib.h NetworkCommunication/LoadOut.h
obj/SensorBase.o: WPIErrors.h
obj/SerialPort.o: SerialPort.h ErrorBase.h Base.h ChipObject/NiRio.h
obj/SerialPort.o: ChipObject/NiFpga.h Error.h ../vxsim/vxWorks.h
obj/SerialPort.o: ../vxsim/semLib.h NetworkCommunication/UsageReporting.h
obj/SerialPort.o: visa/visa.h visa/visatype.h
obj/Servo.o: Servo.h SafePWM.h MotorSafety.h PWM.h SensorBase.h
obj/Servo.o: ChipObject/NiRio.h ChipObject/NiFpga.h ErrorBase.h Base.h
obj/Servo.o: Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h SpeedController.h
obj/Servo.o: NetworkCommunication/UsageReporting.h
obj/SimpleRobot.o: SimpleRobot.h RobotBase.h Base.h Task.h ErrorBase.h
obj/SimpleRobot.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/SimpleRobot.o: ../vxsim/vxWorks.h ../vxsim/semLib.h Watchdog.h
obj/SimpleRobot.o: ChipObject.h ChipObject/tAccumulator.h
obj/SimpleRobot.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/SimpleRobot.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/SimpleRobot.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/SimpleRobot.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/SimpleRobot.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/SimpleRobot.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/SimpleRobot.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/SimpleRobot.o: ChipObject/tWatchdog.h SensorBase.h DriverStation.h
obj/SimpleRobot.o: Dashboard.h DashboardBase.h NetworkCommunication/FRCComm.h
obj/SimpleRobot.o: DriverStationEnhancedIO.h
obj/SimpleRobot.o: NetworkCommunication/UsageReporting.h Timer.h
obj/SolenoidBase.o: SolenoidBase.h Resource.h ErrorBase.h Base.h
obj/SolenoidBase.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/SolenoidBase.o: ../vxsim/vxWorks.h ../vxsim/semLib.h SensorBase.h
obj/SolenoidBase.o: ChipObject.h ChipObject/tAccumulator.h
obj/SolenoidBase.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/SolenoidBase.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/SolenoidBase.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/SolenoidBase.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/SolenoidBase.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/SolenoidBase.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/SolenoidBase.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/SolenoidBase.o: ChipObject/tWatchdog.h Synchronized.h
obj/Solenoid.o: Solenoid.h SolenoidBase.h Resource.h ErrorBase.h Base.h
obj/Solenoid.o: ChipObject/NiRio.h ChipObject/NiFpga.h Error.h
obj/Solenoid.o: ../vxsim/vxWorks.h ../vxsim/semLib.h SensorBase.h
obj/Solenoid.o: ChipObject.h ChipObject/tAccumulator.h
obj/Solenoid.o: ChipObject/tSystemInterface.h ChipObject/tAI.h
obj/Solenoid.o: ChipObject/tAlarm.h ChipObject/tAnalogTrigger.h
obj/Solenoid.o: ChipObject/tCounter.h ChipObject/tDIO.h ChipObject/tDMA.h
obj/Solenoid.o: ChipObject/tEncoder.h ChipObject/tGlobal.h
obj/Solenoid.o: ChipObject/tInterrupt.h ChipObject/tInterruptManager.h
obj/Solenoid.o: ChipObject/NiRio.h ChipObject/tSystem.h
obj/Solenoid.o: ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Solenoid.o: ChipObject/tWatchdog.h NetworkCommunication/UsageReporting.h
obj/Solenoid.o: WPIErrors.h
obj/SPI.o: SPI.h ChipObject.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/SPI.o: ChipObject/NiRio.h ChipObject/NiFpga.h ChipObject/tAccumulator.h
obj/SPI.o: ChipObject/tSystemInterface.h ChipObject/tAI.h ChipObject/tAlarm.h
obj/SPI.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/SPI.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/SPI.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/SPI.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/SPI.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/SPI.o: ChipObject/tWatchdog.h SensorBase.h ErrorBase.h Base.h Error.h
obj/SPI.o: DigitalInput.h DigitalSource.h InterruptableSensorBase.h
obj/SPI.o: DigitalOutput.h NetworkCommunication/UsageReporting.h
obj/SPI.o: Synchronized.h WPIErrors.h ../vxsim/usrLib.h ../vxsim/taskLib.h
obj/Synchronized.o: Synchronized.h ../vxsim/semLib.h
obj/Task.o: Task.h ErrorBase.h Base.h ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Task.o: Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Task.o: NetworkCommunication/UsageReporting.h WPIErrors.h
obj/Task.o: ../vxsim/errnoLib.h ../vxsim/taskLib.h ../vxsim/usrLib.h
obj/Timer.o: Timer.h ../vxsim/semLib.h Base.h ../vxsim/sysLib.h
obj/Timer.o: ../vxsim/usrLib.h ../vxsim/taskLib.h Synchronized.h Utility.h
obj/Ultrasonic.o: Ultrasonic.h SensorBase.h ChipObject/NiRio.h
obj/Ultrasonic.o: ChipObject/NiFpga.h ErrorBase.h Base.h Error.h
obj/Ultrasonic.o: ../vxsim/vxWorks.h ../vxsim/semLib.h Task.h PIDSource.h
obj/Ultrasonic.o: Counter.h AnalogTriggerOutput.h DigitalSource.h
obj/Ultrasonic.o: InterruptableSensorBase.h ChipObject.h
obj/Ultrasonic.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Ultrasonic.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Ultrasonic.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Ultrasonic.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Ultrasonic.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Ultrasonic.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Ultrasonic.o: ChipObject/tSystem.h ChipObject/tSolenoid.h
obj/Ultrasonic.o: ChipObject/tSPI.h ChipObject/tWatchdog.h CounterBase.h
obj/Ultrasonic.o: DigitalInput.h DigitalOutput.h
obj/Ultrasonic.o: NetworkCommunication/UsageReporting.h Timer.h Utility.h
obj/Ultrasonic.o: ../vxsim/taskLib.h WPIErrors.h
obj/Victor.o: Victor.h SafePWM.h MotorSafety.h PWM.h SensorBase.h
obj/Victor.o: ChipObject/NiRio.h ChipObject/NiFpga.h ErrorBase.h Base.h
obj/Victor.o: Error.h ../vxsim/vxWorks.h ../vxsim/semLib.h SpeedController.h
obj/Victor.o: PIDOutput.h DigitalModule.h Module.h
obj/Victor.o: NetworkCommunication/LoadOut.h ChipObject.h
obj/Victor.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Victor.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Victor.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Victor.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Victor.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Victor.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Victor.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Victor.o: ChipObject/tWatchdog.h NetworkCommunication/UsageReporting.h
obj/Watchdog.o: Watchdog.h ChipObject.h ../vxsim/vxWorks.h ../vxsim/semLib.h
obj/Watchdog.o: ChipObject/NiRio.h ChipObject/NiFpga.h
obj/Watchdog.o: ChipObject/tAccumulator.h ChipObject/tSystemInterface.h
obj/Watchdog.o: ChipObject/tAI.h ChipObject/tAlarm.h
obj/Watchdog.o: ChipObject/tAnalogTrigger.h ChipObject/tCounter.h
obj/Watchdog.o: ChipObject/tDIO.h ChipObject/tDMA.h ChipObject/tEncoder.h
obj/Watchdog.o: ChipObject/tGlobal.h ChipObject/tInterrupt.h
obj/Watchdog.o: ChipObject/tInterruptManager.h ChipObject/NiRio.h
obj/Watchdog.o: ChipObject/tSystem.h ChipObject/tSolenoid.h ChipObject/tSPI.h
obj/Watchdog.o: ChipObject/tWatchdog.h SensorBase.h ErrorBase.h Base.h
obj/Watchdog.o: Error.h
