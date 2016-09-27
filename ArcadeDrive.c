#include "Drive.h"
#define THRESHOLD 10
task arcadeDrive()
{

    // Forward, and swing turns: (both abs(X) and abs(Y) are above the threshold, and Y is POSITIVE)
    if((abs(joy_x) > threshold) && (abs(joy_y) > threshold) && (joy_y > 0))
    {
      motor[leftMotor]  = (joy_y + joy_x)/2;
      motor[rightMotor] = (joy_y - joy_x)/2;
    }
    // Backwards and swing turns: (both abs(X) and abs(Y) are above the threshold, and Y is NEGATIVE)
    else if((abs(joy_x) > threshold) && (abs(joy_y) > threshold) && (joy_y < 0))
    {
      motor[leftMotor]  = (joy_y - joy_x)/2;
      motor[rightMotor] = (joy_y + joy_x)/2;
    }
    // Turning in place: (abs(X) is above the threshold, abs(Y) is below the threshold)
    else if((abs(joy_x) > threshold) && (abs(joy_y) < threshold))
    {
      motor[leftMotor]  = joy_x;
      motor[rightMotor] = (-1 * joy_x);
    }
    // Standing still: (both abs(X) and abs(Y) are below the threshold)
    else
    {
      motor[leftMotor]  = 0;
      motor[rightMotor] = 0;
    }
}
