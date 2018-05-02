#pragma config(StandardModel, "GTT Testbed")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true) {
		if (SensorValue[bumpSwitch] ==1) {//if the bumper switch is pressed, do this
			startMotor(port2,63);//start the right motor
			startMotor(port3,63);// start the left motor
			wait(2);//wait 2 seconds
			stopMotor(port2);//stop the right motor
			stopMotor(port3);//stop the left motor
		}
	}
}
