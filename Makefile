all: MyRobot.console subdirs

TOP_DIR=.
SUBDIRS=rbmj-wpilib vxsim testharness
include Make.rules

MyRobot.wx:  $(OBJ_DIR)/MyRobot.o
	g++ -g $(WX_LDFLAGS) -o $@ $< $(WPILIB) $(VXSIMLIB) $(GUITESTLIB)

MyRobot.console:  $(OBJ_DIR)/MyRobot.o $(CONSOLETESTLIB) $(VXSIMLIB) $(WPILIB)
	g++ -g $(WX_LDFLAGS) -o $@ $< $(WPILIB) $(VXSIMLIB)  $(CONSOLETESTLIB)

# Auto generated lines by 'make depend'
# DO NOT DELETE
