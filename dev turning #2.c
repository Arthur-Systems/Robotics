
task main()
{
	startMotor(port2, 100);
	startMotor(port3, -100);
	wait(1);
	stopMotor(port2);
	stopMotor(port3);
	waitInMilliseconds(10);
	startMotor(port2, 70);
	startMotor(port3, 40);
	wait(60);
	stopMotor(port2);
	stopMotor(port3);

}
