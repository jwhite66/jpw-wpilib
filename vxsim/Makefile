all: obj/vxsim.a

TOP_DIR=..
include ../Make.rules

SOURCES=\
    semLib.cpp assert.cpp moduleLib.cpp nivision.cpp taskLib.cpp timer.cpp unldLib.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/vxsim.a:  $(OBJECTS)
	ar rs $@ $^

# Auto generated lines by 'make depend'
# DO NOT DELETE

obj/semLib.o: ../vxsim/semLib.h
obj/moduleLib.o: moduleLib.h
obj/taskLib.o: taskLib.h sysLib.h
obj/unldLib.o: moduleLib.h unldLib.h
