OBJ_DIR=obj
SRC_DIR=.
WPI_DIR=./rbmj-wpilib/
WX_LDFLAGS=`wx-config --libs`
HACK_INCLUDES=-isystem $(SRC_DIR)/vxsim -I $(SRC_DIR)/vxsim -include $(SRC_DIR)/vxsim/basetsd.h -include $(SRC_DIR)/vxsim/hack.h
WPI_CFLAGS=-I $(WPI_DIR)

MyRobot:  $(OBJ_DIR)/MyRobot.o $(WPI_DIR)/obj/wpilib.a vxsim/obj/vxsim.a testharness/obj/testharness.a
	g++ $(WX_LDFLAGS) -o $@ $^ 2>&1 | tee link.out

$(OBJ_DIR)/MyRobot.o : MyRobot.cpp Makefile
	g++ -fpermissive $(WPI_CFLAGS) $(HACK_INCLUDES) -I $(SRC_DIR) -Wall -o "$@" -c "$<"
