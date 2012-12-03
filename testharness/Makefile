all: obj/testharness.a

TOP_DIR=..
include ../Make.rules

SOURCES=App.cpp CAN.cpp ChipObject.cpp MotorDisplay.cpp NetworkCommunication.cpp \
        SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp UsageReporting.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

all: obj/testharness.a

obj/testharness.a:  $(OBJECTS)
	ar rs $@ $^

obj/App:  Simulator.cpp obj/testharness.a Makefile
	g++ -g -m32 -DSTANDALONE $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) -I . -Wall -o "$@" "$<" $(WX_LDFLAGS) obj/testharness.a
