#pragma config(Sensor, in1,    Bob1,           sensorLineFollower)
#pragma config(Sensor, in2,    Bob2,           sensorNone)
#pragma config(Sensor, dgtl1,  bumpSwitch,     sensorTouch)
#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{ startMotor(port1,20);
	startMotor(port10,100);
	wait(2);
	stopMotor(port1);
	wait(1);
	stopMotor(port10);



}
