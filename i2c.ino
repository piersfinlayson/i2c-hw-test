#include "Arduino.h"

#define SDA_PIN  5
#define SDL_PIN  4

void setup(void)
{
  Serial.begin(115200);
  Serial.println("Setup entry");
  pinMode(SDA_PIN, OUTPUT);
  pinMode(SDL_PIN, OUTPUT);
  digitalWrite(SDA_PIN, LOW);
  digitalWrite(SDL_PIN, LOW);
  Serial.println("Setup exit");
}

void loop()
{
  Serial.println("SDA 5 low, SDL 4 low");
  digitalWrite(SDA_PIN, LOW);
  digitalWrite(SDL_PIN, LOW);
  delay(5000);
  Serial.println("SDA 5 low, SDL 4 high");
  digitalWrite(SDA_PIN, LOW);
  digitalWrite(SDL_PIN, HIGH);
  delay(5000);
  Serial.println("SDA 5 high, SDL 4 low");
  digitalWrite(SDA_PIN, HIGH);
  digitalWrite(SDL_PIN, LOW);
  delay(5000);
  Serial.println("SDA 5 high, SDL 4 high");
  digitalWrite(SDA_PIN, HIGH);
  digitalWrite(SDL_PIN, HIGH);
  delay(5000);
}
