#include <avr/io.h>
#include <util/delay.h>
#include "pitches.h"

// Array untuk menyimpan frekuensi nada dalam flash memory menggunakan PROGMEM
const int melody[] PROGMEM = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

// Jumlah nada dalam array melody
const int melodyLength = sizeof(melody) / sizeof(melody[0]);

// Pin tombol input dari 2 hingga 9 (kita akan menggunakan pin B untuk tombol)
const int buttonPins[] = {PB0, PB1, PB2, PB3, PB4, PB5, PB6, PB7};

// Pin untuk switch pengaturan nada (kita akan menggunakan pin D untuk switch)
const int highPitchPin = PD4;
const int lowPitchPin = PD3;

// Pin untuk output suara
const int buzzerPin = PD6;

void setup() {
  // Inisialisasi pin tombol sebagai input dengan pull-up resistor
  DDRB = 0x00; // Set PORTB sebagai input
  PORTB = 0xFF; // Enable pull-up resistors on PORTB

  // Inisialisasi pin untuk switch pengaturan nada
  DDRD &= ~(1 << highPitchPin) & ~(1 << lowPitchPin); // Set highPitchPin dan lowPitchPin sebagai input
  PORTD |= (1 << highPitchPin) | (1 << lowPitchPin); // Enable pull-up resistors

  // Inisialisasi pin untuk output suara
  DDRD |= (1 << buzzerPin); // Set buzzerPin sebagai output
}

void playTone(int frequency) {
  int delayValue = 1000000 / (frequency * 2); // Delay untuk setengah periode
  for (int i = 0; i < (frequency / 10); i++) { // Mainkan nada untuk beberapa siklus
    PORTD |= (1 << buzzerPin); // Set buzzerPin HIGH
    _delay_us(delayValue); // Tunggu
    PORTD &= ~(1 << buzzerPin); // Set buzzerPin LOW
    _delay_us(delayValue); // Tunggu
  }
}

void loop() {
  bool notePlayed = false;
  for (int i = 0; i < melodyLength; i++) {
    // Membaca status tombol
    if (!(PINB & (1 << buttonPins[i]))) {
      // Membaca frekuensi nada dari flash memory
      int note = pgm_read_word_near(melody + i);
      
      // Cek status switch untuk pengaturan nada
      if (!(PIND & (1 << highPitchPin))) {
        note = note * 2; // Nada tinggi
      } else if (!(PIND & (1 << lowPitchPin))) {
        note = note / 2; // Nada rendah
      }
      
      // Memainkan nada pada pin buzzer
      playTone(note);
      notePlayed = true;
      break; // Keluar dari loop setelah menemukan tombol yang ditekan
    }
  }
  if (!notePlayed) {
    // Menghentikan nada jika tidak ada tombol yang ditekan
    PORTD &= ~(1 << buzzerPin); // Set buzzerPin LOW
  }
  _delay_ms(10); // Menambahkan sedikit penundaan untuk stabilitas
}

int main(void) {
  setup();
  while (1) {
    loop();
  }
  return 0;
}