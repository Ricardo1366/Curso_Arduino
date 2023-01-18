#include <Arduino.h>
#define EJEMPLO1

void setup()
{
  // Configuración hardaware.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
#if defined(EJEMPLO1)
  // Tiempo encendido = Tiempo apagado
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  Serial.println(F("Cambiando estado led"));
  delay(250);
#endif

#if defined(EJEMPLO2)
  // Tiempo encendido != Tiempo apagado
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println(F("Led encendido"));
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println(F("Led apagado"));
  delay(750);
#endif
}