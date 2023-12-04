// C++ code
//
#include <Servo.h>
Servo servo_array[3];
int angulo = 0;
int angulo_atual;

  
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  servo_array[0].attach(9);
  servo_array[1].attach(10);
  servo_array[2].attach(11);

  Serial.begin(9600);
}

void loop()
{
  //loop pra mudar o angulo ate 180
  for(angulo = 0; angulo <180; angulo++){
    //mover o primeiro servo_motor
    servo_array[0].write(angulo);
    angulo_atual = servo_array[0].read();
    Serial.print("Angulo do servo-motor 0 : ");
    Serial.println(angulo_atual);
    delay(15);
  }
  //loop pra fazer o angulo voltar pra 0
  for(angulo = 180; angulo >0; angulo--){
	//mover o primeiro servo_motor
   	servo_array[0].write(angulo);
    angulo_atual = servo_array[0].read();
    Serial.print("Angulo do servo-motor 0 : ");
    Serial.println(angulo_atual);
    delay(15);
    

  }
}