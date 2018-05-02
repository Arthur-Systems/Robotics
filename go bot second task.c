
task main()
{
	startMotor(port2, -50);
	startMotor(port3, 50);
	wait(3);
	stopMotor(port2);
	stopMotor(port3);
}
