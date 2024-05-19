#include "pitches.h"

#define SPEAKER_PIN 10
#define HIGH_TONE_SWITCH_PIN 11
#define NORMAL_TONE_SWITCH_PIN 12

const uint8_t buttonPins[] = {8, 7, 6, 5, 4, 3, 2, 9};
const int buttonTones[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};
const int numTones = sizeof(buttonPins) / sizeof(buttonPins[0]);

void setup() {
  for (uint8_t i = 0; i < numTones; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  pinMode(SPEAKER_PIN, OUTPUT);
  pinMode(HIGH_TONE_SWITCH_PIN, INPUT_PULLUP);
  pinMode(NORMAL_TONE_SWITCH_PIN, INPUT_PULLUP);
}

void loop() {
  int pitch = 0;
  bool highToneActive = digitalRead(HIGH_TONE_SWITCH_PIN) == LOW;
  bool normalToneActive = digitalRead(NORMAL_TONE_SWITCH_PIN) == LOW;

  for (uint8_t i = 0; i < numTones; i++) {
    if (digitalRead(buttonPins[i]) == LOW) {
      pitch = buttonTones[i];
    }
  }

  if (pitch) {
    if (highToneActive) {
      pitch *= 2; // Double the pitch for high tone
    } else if (!normalToneActive) {
      // If neither high tone nor normal tone switch is active, use original pitch
    }
    tone(SPEAKER_PIN, pitch);
  } else {
    noTone(SPEAKER_PIN);
  }
}