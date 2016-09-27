#include "RobotCode16.h"
#include "Drive.h"
#include "TankDrive.c"
#include "ArcadeDrive.c"
task main()
{
	while (true)
	{
		tankDrive();
		//arcadeDrive();
		//non-drive
	}
}
