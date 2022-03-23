#include <Servo.h>

int buttonif = 0;

Servo servo_A0;

void setup()
{
  servo_A0.attach(A0, 500, 2500);

}

void loop()
{
  servo_A0.write(90);
  delay(10); // Delay a little bit to improve simulation performance
}
