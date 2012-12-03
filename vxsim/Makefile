all: obj/vxsim.a

TOP_DIR=..
include ../Make.rules

SOURCES=\
    semLib.cpp assert.cpp moduleLib.cpp nivision.cpp taskLib.cpp timer.cpp unldLib.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/vxsim.a:  $(OBJECTS)
	ar rs $@ $^
