#include "WPILib.h"
#include <Joystick.h>

class RobotDemo : public SimpleRobot
{
	RobotDrive driving; // robot drive system
	Joystick rightstick; // drive joystick
	Joystick leftstick; //shoot/bridge joystick
	float drivespeed; //defines drive speed from controller
	float leftspeed;
	float rightspeed;

public:
	RobotDemo(void):
		driving(1, 2),	// these must be initialized in the same order as they are declared above.
		rightstick(1),
		leftstick(2),
		leftspeed(0.0),
		rightspeed(0.0)
	{
		driving.SetExpiration(0.1);
		driving.SetSafetyEnabled(true);
	}
	
	void Autonomous(void)
	{
		driving.SetSafetyEnabled(false);
		driving.Drive(0.5, 0.0); 	// drive forwards half speed
		Wait(2.0); 				//    for 2 seconds
		driving.Drive(0.0, 0.0); 	// stop robot
	}

	void OperatorControl(void)
	{
		driving.SetSafetyEnabled(true);
		driving.TankDrive(leftspeed, rightspeed);
		leftspeed = leftstick.GetX();
		rightspeed = rightstick.GetX();
		Wait(0.005); // wait for a motor update time
	}
};

START_ROBOT_CLASS(RobotDemo);
