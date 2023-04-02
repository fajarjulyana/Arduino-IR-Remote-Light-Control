#include <IRremote.h>

int IR_RECEIVE_PIN = 11; // pin dari IR receiver

int LED_PIN = 13; // pin dari LED

IRrecv irrecv(IR_RECEIVE_PIN);

decode_results results;

void setup()

{

  Serial.begin(9600);

  irrecv.enableIRIn(); // memulai pembacaan IR

  pinMode(LED_PIN, OUTPUT);

}

void loop() {

  if (irrecv.decode(&results)) {

    Serial.println(results.value, HEX); // cetak kode IR yang diterima

    switch (results.value) {

      case 0xFF6897: // contoh kode untuk tombol 1 pada remote

        digitalWrite(LED_PIN, HIGH); // hidupkan LED

        break;

      case 0xFF9867: // contoh kode untuk tombol 2 pada remote

        digitalWrite(LED_PIN, LOW); // matikan LED

        break;

    }

    irrecv.resume(); // melanjutkan pembacaan IR

  }

}

