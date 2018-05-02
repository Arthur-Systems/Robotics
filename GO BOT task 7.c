
task main()
{
	startMotor(port2,100);
	startMotor(port3,-100);
	wait(3);
	if(SensorValue(dgtl1)== 1) {
		stopMotor(port2);
		stopMotor(port3);
		wait(0.5);
		startMotor(port2,-100);//reversed
		startMotor(port3,100);//reversed
		wait(1);
		stopMotor(port2);
		stopMotor(port3);
		wait(0.5);
		startMotor (port3,127);//part of right turn
		startMotor (port2,80);//part of right turn
		wait(9.69);//works
		stopMotor(port2);
		stopMotor(port3);
		}
	}
