#define speaker 3
#define led1 4
#define led2 2


#include <TroykaLight.h>
TroykaLight sensorLight(A0);

void setup() {
pinMode(speaker, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {

sensorLight.read();
int lux = sensorLight.getLightLux();

delay(1000);

if (lux < 1){
  digitalWrite(led1, HIGH);
  delay(3000);
  digitalWrite(led1, LOW);
  delay(100);}
else{
  for (int i = 0; i < 3; i++){
    tone(speaker, 500);
  digitalWrite(led2, HIGH);
  delay(1000);
  noTone(speaker);
  digitalWrite(led2, LOW);
  delay(1000);
  }
}
}