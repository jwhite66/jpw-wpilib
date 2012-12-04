all: obj/testharness.a obj/App

TOP_DIR=..
include ../Make.rules

CORE_SOURCES=App.cpp MotorDisplay.cpp \
        SimulationData.cpp SimulationWindow.cpp Simulator.cpp Slider.cpp TogglePanelButton.cpp
HARNESS_SOURCES=CAN.cpp ChipObject.cpp NetworkCommunication.cpp UsageReporting.cpp

ALL_SOURCES=$(CORE_SOURCES) $(HARNESS_SOURCES)
TRIM_SOURCES=$(strip $(ALL_SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/testharness.a:  $(OBJECTS)
	ar rs $@ $^

obj/App:  $(CORE_SOURCES)
	g++ $(CFLAGS) -DSTANDALONE $(WX_CFLAGS) $(WPI_CFLAGS) $(HACK_INCLUDES) $(VXSIM_INCLUDES) $(EXTRA_CFLAGS) -o "$@" $^ $(WX_LDFLAGS)
