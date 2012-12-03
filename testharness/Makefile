all: obj/testharness.a obj/App

TOP_DIR=..
include ../Make.rules

SOURCES=App.cpp CAN.cpp ChipObject.cpp MotorDisplay.cpp NetworkCommunication.cpp \
        SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp UsageReporting.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

all: obj/testharness.a

obj/testharness.a:  $(OBJECTS)
	ar rs $@ $^

obj/App:  $(SOURCES)
	g++ $(CFLAGS) -DSTANDALONE $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) $(VXSIM_INCLUDES) $(EXTRA_CFLAGS) -o "$@" $^ $(WX_LDFLAGS)
