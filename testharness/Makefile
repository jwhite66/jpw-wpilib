SRC_DIR=..
WPI_DIR=../rbmj-wpilib/
WX_CFLAGS=`wx-config --cxxflags`
WX_LDFLAGS=`wx-config --libs`
HACK_INCLUDES=-isystem $(SRC_DIR)/sim -I $(SRC_DIR)/sim -include $(SRC_DIR)/sim/basetsd.h -include $(SRC_DIR)/sim/hack.h
WPI_CFLAGS=-I $(WPI_DIR) -I $(WPI_DIR)/NetworkCommunication

SOURCES=App.cpp MotorDisplay.cpp SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

testharness.a:  $(OBJECTS)
	ar r $@ $^

obj/%.o: %.cpp
	g++ $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) -I . -Wall -o "$@" -c "$<"

