#include <Servo.h>
#include <SPI.h>
#include "Motor.h"


#define BT_A 14
#define BT_B 15


Motor motor1;
Motor motor2;



void setup() {
  Serial.begin(9600);
  motor1.defineRight(8, 5, 7); //9 4 6 //motor 2
  motor1.defineLeft(9, 6, 4); //8 7 5 // motor 1


  motor2.defineRight(47, 48, 50); //9 4 6 //motor 2
  motor2.defineLeft(46, 51, 49); //8 7 5 // motor 1

   delay(5000);
}



void loop() {

  frente(254, 1000);
  stop(1000);
  right(180, 700);
  stop(1000);
  left(180, 80
  0);
  stop(1000);

  tras(254, 1000);
  stop(800);


}


void frente(int velocidade, int time_run) {
  motor1.back(velocidade);
  motor2.back(velocidade);
  delay(time_run);
}

void tras(int velocidade, int time_run) {
  motor1.front(velocidade);
  motor2.front(velocidade);
  delay(time_run);

}


void right(int velocidade, int time_run) {
  motor1.right(velocidade);
  motor2.right(velocidade);
  delay(time_run);

}

void left(int velocidade, int time_run) {
  motor1.left(velocidade);
  motor2.left(velocidade);
  delay(time_run);

}

void stop( int time_run) {
  motor1.stop();
  motor2.stop();
  delay(time_run);

}
