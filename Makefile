all: MyRobot subdirs

TOP_DIR=.
SUBDIRS=rbmj-wpilib vxsim testharness
include Make.rules

MyRobot:  $(OBJ_DIR)/MyRobot.o subdirs
	g++ -g $(WX_LDFLAGS) -o $@ $< $(WPILIB) $(VXSIMLIB) $(TESTHARNESSLIB)

# Auto generated lines by 'make depend'
# DO NOT DELETE
