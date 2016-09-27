#include "Drive.h"
void tankDrive()
{
	motor[leftMotor] = LStickY;   // Left Joystick Y value
	motor[rightMotor] = RStickY;   // Right Joystick Y value
}
