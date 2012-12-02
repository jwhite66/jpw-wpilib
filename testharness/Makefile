SRC_DIR=..
WPI_DIR=../rbmj-wpilib/
WX_CFLAGS=`wx-config --cxxflags`
HACK_INCLUDES=-isystem $(SRC_DIR)/vxsim -I $(SRC_DIR)/vxsim -include $(SRC_DIR)/vxsim/basetsd.h -include $(SRC_DIR)/vxsim/hack.h
WPI_CFLAGS=-I $(WPI_DIR) -I $(WPI_DIR)/NetworkCommunication -I $(WPI_DIR)/ChipObject -I $(WPI_DIR)/CAN
WX_LDFLAGS=`wx-config --libs`

SOURCES=App.cpp CAN.cpp ChipObject.cpp MotorDisplay.cpp NetworkCommunication.cpp SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp UsageReporting.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

all: obj/testharness.a obj/App

obj/testharness.a:  $(OBJECTS)
	ar rs $@ $^

obj/App:  Simulator.cpp obj/testharness.a Makefile
	g++ -g -m32 -DSTANDALONE $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) -I . -Wall -o "$@" "$<" $(WX_LDFLAGS) obj/testharness.a

obj/%.o: %.cpp
	g++ -g -m32 $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) -I . -Wall -o "$@" -c "$<"

