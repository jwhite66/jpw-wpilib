#include "WPILib.h"
#include <Joystick.h>

class RobotDemo : public SimpleRobot
{
	RobotDrive driving; // robot drive system
	RobotDrive shooter; //shooting system
	Joystick rightstick; // drive joystick
	Joystick leftstick; //shoot/bridge joystick
	Compressor comp; //compressor
	Jaguar ballloader; //ball loading pulley
	Relay rel; //define relay rel
	Relay::Value shooterpiston; //shooter piston
	Relay::Value bridgeout;
	Relay::Value bridgedown;
	float shooterspeed; //defines shooter speed from scroller
	float drivespeed; //defines drive speed from controller
	float leftspeed;
	float rightspeed;

public:
	RobotDemo(void):
		driving(1, 2),	// these must be initialized in the same order as they are declared above.
		shooter(3, 4),
		rightstick(1),
		leftstick(2),
		comp(1,1),
		ballloader(5),
		rel(2),
		shooterpiston(Relay::kOff),
		bridgeout(Relay::kOff),
		bridgedown(Relay::kOff),
		leftspeed(0.0),
		rightspeed(0.0)
	{
		driving.SetExpiration(0.1);
		comp.Start(); //Starts compressor
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
		while (IsOperatorControl())
		{
			if(leftstick.GetRawButton(1))
			{
				shooter.Drive(1.0, 0.0);
				Wait(3.0);
				shooterpiston = Relay::kForward;
				shooterpiston = Relay::kReverse;
				shooter.Drive(0.0, 0.0);
				
			}
			if (leftstick.GetRawButton(2))
			{
				bridgeout = Relay::kForward;
				Wait(1.0);
				bridgedown = Relay::kForward;
			}
				else
				{
					bridgedown = Relay::kForward;
					Wait(1.0);
					bridgeout = Relay::kForward;
				}
			Wait(0.005); // wait for a motor update time
		}
	}
};

START_ROBOT_CLASS(RobotDemo);
