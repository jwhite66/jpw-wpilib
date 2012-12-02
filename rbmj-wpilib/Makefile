SRC_DIR=..
WPI_DIR=.
HACK_INCLUDES=-isystem $(SRC_DIR)/vxsim -I $(SRC_DIR)/vxsim -include $(SRC_DIR)/vxsim/basetsd.h -include $(SRC_DIR)/vxsim/hack.h
HACK_CFLAGS=-g -m32 -DDISABLE_STACK_TRACE -DDISABLE_GETPPCTIMESTAMP
WPI_CFLAGS=-I $(WPI_DIR) -I $(WPI_DIR)/NetworkCommunication

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
	ar r $@ $^

obj/%.o: %.cpp
	g++ $(WPI_CFLAGS) $(HACK_CFLAGS) $(HACK_INCLUDES) -Wall -o "$@" -c "$<"

