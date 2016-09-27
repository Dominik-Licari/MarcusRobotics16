#ifndef Drive16
#define Drive16
#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorNormal, openLoop)
#define leftMotor port3
#define rightMotor port2
#define RStickY vexRT[Ch2]
#define LStickY vexRT[Ch3]
#define LStickX vexRT[Ch4]
#endif
