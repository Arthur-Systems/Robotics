#pragma config(Sensor, dgtl2,  bumpswitch,     sensorTouch)
#pragma config(Motor,  port2,           rightMotor,    tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
repeat(forever);
startMotor(port2,70);

untilBump(dgtl2);
stop();

}
