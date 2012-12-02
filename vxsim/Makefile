SRC_DIR=..
WPI_DIR=.
HACK_INCLUDES=-isystem $(SRC_DIR)/vxsim -I $(SRC_DIR)/vxsim -include $(SRC_DIR)/vxsim/basetsd.h -include $(SRC_DIR)/vxsim/hack.h
WPI_CFLAGS=-I $(WPI_DIR) -I $(WPI_DIR)/NetworkCommunication

SOURCES=\
    semLib.cpp assert.cpp moduleLib.cpp nivision.cpp taskLib.cpp timer.cpp unldLib.cpp

TRIM_SOURCES=$(strip $(SOURCES))
OBJECTS=$(patsubst %.cpp, obj/%.o, $(TRIM_SOURCES))

obj/vxsim.a:  $(OBJECTS)
	ar r $@ $^

obj/%.o: %.cpp
	g++ $(WPI_CFLAGS) $(HACK_INCLUDES) -Wall -o "$@" -c "$<"

