OBJ_DIR=obj
SRC_DIR=.
WPI_DIR=./rbmj-wpilib/
WX_LDFLAGS=`wx-config --libs`
HACK_INCLUDES=-isystem $(SRC_DIR)/vxsim -I $(SRC_DIR)/vxsim -include $(SRC_DIR)/vxsim/basetsd.h -include $(SRC_DIR)/vxsim/hack.h
WPI_CFLAGS=-I $(WPI_DIR)
MyRobot:  $(OBJ_DIR)/MyRobot.o testharness/obj/testharness.a $(WPI_DIR)/obj/wpilib.a vxsim/obj/vxsim.a
	g++ $(WX_LDFLAGS) -o $@ $^

$(OBJ_DIR)/MyRobot.o : MyRobot.cpp Makefile
	g++ -fpermissive $(WPI_CFLAGS) $(HACK_INCLUDES) -I $(SRC_DIR) -Wall -o "$@" -c "$<"

$(OBJ_DIR)/%.o : Vision/%.cpp
	g++ -fpermissive $(HACK_INCLUDES) -I $(SRC_DIR) -Wall -o "$@" -c "$<"

$(OBJ_DIR)/%.o : Vision2009/%.cpp
	g++ -fpermissive $(HACK_INCLUDES) -I $(SRC_DIR) -Wall -o "$@" -c "$<"

OBJECTS := \
         $(OBJ_DIR)/Ultrasonic.o \
         $(OBJ_DIR)/AnalogModule.o \
         $(OBJ_DIR)/Gyro.o \
	 $(OBJ_DIR)/DigitalInput.o \
         $(OBJ_DIR)/Jaguar.o \
	 $(OBJ_DIR)/Relay.o \
         $(OBJ_DIR)/Compressor.o \
         $(OBJ_DIR)/AnalogChannel.o \
         $(OBJ_DIR)/HiTechnicCompass.o \
	 $(OBJ_DIR)/SerialPort.o \
         $(OBJ_DIR)/Error.o \
         $(OBJ_DIR)/FrcError.o \
         $(OBJ_DIR)/AnalogTriggerOutput.o \
	 $(OBJ_DIR)/AnalogTrigger.o \
         $(OBJ_DIR)/Watchdog.o \
	 $(OBJ_DIR)/Dashboard.o \
         $(OBJ_DIR)/Counter.o \
         $(OBJ_DIR)/SimpleRobot.o \
	 $(OBJ_DIR)/DigitalOutput.o \
         $(OBJ_DIR)/Accelerometer.o \
         $(OBJ_DIR)/PIDController.o \
         $(OBJ_DIR)/Solenoid.o \
	 $(OBJ_DIR)/ErrorBase.o \
         $(OBJ_DIR)/BaeUtilities.o \
	 $(OBJ_DIR)/PWM.o \
         $(OBJ_DIR)/Encoder.o \
         $(OBJ_DIR)/VisionAPI.o \
	 $(OBJ_DIR)/DriverStation.o \
         $(OBJ_DIR)/Module.o \
         $(OBJ_DIR)/RobotDrive.o \
	 $(OBJ_DIR)/TrackAPI.o \
         $(OBJ_DIR)/IterativeRobot.o \
         $(OBJ_DIR)/Notifier.o \
         $(OBJ_DIR)/InterruptableSensorBase.o \
	 $(OBJ_DIR)/Resource.o \
         $(OBJ_DIR)/Synchronized.o \
         $(OBJ_DIR)/Joystick.o \
	 $(OBJ_DIR)/Victor.o \
         $(OBJ_DIR)/GearTooth.o \
	 $(OBJ_DIR)/DigitalSource.o \
         $(OBJ_DIR)/Servo.o \
         $(OBJ_DIR)/SensorBase.o \

# Hmm.  Needs some stuff...
#         $(OBJ_DIR)/RobotBase.o \

# Need symbol lookup (or hacking to eliminate it)
#         $(OBJ_DIR)/Utility.o \

# Need task stuff
#	 $(OBJ_DIR)/DigitalModule.o \
#	 $(OBJ_DIR)/PCVideoServer.o \
#         $(OBJ_DIR)/Timer.o \
#	 $(OBJ_DIR)/Task.o \
#         $(OBJ_DIR)/AxisCamera.o \
#	 $(OBJ_DIR)/AxisCamera2010.o \
#         $(OBJ_DIR)/I2C.o \

$(OBJ_DIR)/WPILib.a : $(OBJECTS)
	ar r "$@" $(OBJECTS) $(SUB_OBJECTS)
