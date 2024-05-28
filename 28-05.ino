#include <MultiFuncShield.h>
#include <TimerOne.h>

void setup() {
  Timer1.initialize(); // inicializa o Timer 1
  MFS.initialize(&Timer1); // initializa a biblioteca Multi função
}

void loop() {
  MFS.writeLeds(LED_ALL, ON); // acende todos os LEDs
  delay(1000); // espera de 1 segundo
  MFS.blinkLeds(LED_1, ON); // pisca LED 1
  delay(1000); // espera de 1 segundo
  MFS.blinkLeds(LED_2, ON); // pisca LED 2
  delay(1000); // espera de 1 segundo
  MFS.blinkLeds(LED_1 | LED_2, OFF); // apaga LED 1 e 2
  MFS.blinkLeds(LED_3 | LED_4, ON); // pisca LED 3 e 4
  delay(1000); // espera de 1 segundo
  MFS.blinkLeds(LED_ALL, ON); // pisca todos os LEDs
  delay(1000); // espera de 1 segundo
  MFS.blinkLeds(LED_ALL, OFF); // apaga o pisca dos LEDs
  MFS.writeLeds(LED_ALL, OFF); // apaga o acender dos LEDs
  delay(1000); 
}
