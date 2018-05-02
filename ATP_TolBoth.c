
task main()
{
repeat(forever)

 if SensorValue[(in1)== 2600]
startMotor(port2,-10);
wait(2);
startMotor(port2,10);



}
