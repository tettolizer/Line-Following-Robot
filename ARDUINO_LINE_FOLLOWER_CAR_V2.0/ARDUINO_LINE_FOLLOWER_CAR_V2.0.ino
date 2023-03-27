
#include<AFMotor.h> //Include Adafruit Motor Driver Shield Library
//create motor obejects
AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

#define LEFT_SENSOR A0 // connect the Left sensor with analog pin A0
#define RIGHT_SENSOR A1 // connect the Right sensor with analog pin A1

void setup() {
  
pinMode(RIGHT_SENSOR, INPUT); // initialize Right sensor as an input
pinMode(LEFT_SENSOR, INPUT); // initialize Left sensor as as input

}

void loop() {
if(analogRead(RIGHT_SENSOR)<=100 && analogRead(LEFT_SENSOR)<=100) //compare both sensor value to set the directionc
{
  motor1.run(BACKWARD); // run motor1 clockwise
  motor1.setSpeed(120); // set motor1 speed 50 percent
  motor2.run(BACKWARD); // run motor2 clockwise
  motor2.setSpeed(120); // set motor2 speed 50 percent
  motor3.run(BACKWARD); // run motor3 clockwise
  motor3.setSpeed(120); // set motor3 speed 50 percent
  motor4.run(BACKWARD); // run motor4 clockwise
  motor4.setSpeed(120); // set motor4 speed 50 percent
}
 else if(!analogRead(RIGHT_SENSOR)<=100 && analogRead(LEFT_SENSOR)<=100) //compare both sensor value to set the direction
 {
  motor1.run(BACKWARD); // run motor1 clockwise
  motor1.setSpeed(255); // set motor1 speed 100 percent
  motor2.run(BACKWARD); // run motor2 clockwise
  motor2.setSpeed(255); // set motor2 speed 100 percent
  motor3.run(FORWARD); // run motor3 anti-clockwise
  motor3.setSpeed(255); // set motor3 speed 100 percent
  motor4.run(FORWARD); // run motor4 anti-clockwise
  motor4.setSpeed(255); // set motor4 speed 100 percent
  
}
 else if(analogRead(RIGHT_SENSOR)<=100 && !analogRead(LEFT_SENSOR)<=100) //comparv e both sensor value to set the direction
 {
  motor1.run(FORWARD); // run motor1 anti-clockwise
  motor1.setSpeed(255); // set motor1 speed 100 percent
  motor2.run(FORWARD); // run motor2 anti-clockwise
  motor2.setSpeed(255); // set motor2 speed 100 percent
  motor3.run(BACKWARD);  // run motor3 clockwise
  motor3.setSpeed(255); // set motor3 speed 100 percent
  motor4.run(BACKWARD);  // run motor4 clockwise
  motor4.setSpeed(255); // set motor4 speed 100 percent
}
else if(!analogRead(RIGHT_SENSOR)<=100 && !analogRead(LEFT_SENSOR)<=100) //compare both sensor value to set the direction
{
  motor1.run(BACKWARD); // run motor1 clockwise
  motor1.setSpeed(120); // set motor1 speed 50 percent
  motor2.run(BACKWARD); // run motor2 clockwise
  motor2.setSpeed(120); // set motor2 speed 50 percent
  motor3.run(BACKWARD); // run motor3 clockwise
  motor3.setSpeed(120); // set motor3 speed 50 percent
  motor4.run(BACKWARD); // run motor4 clockwise
  motor4.setSpeed(120); // set motor4 speed 50 percent
 }
}

//TETTOLIZER