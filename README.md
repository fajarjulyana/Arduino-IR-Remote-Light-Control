# Arduino-IR-Remote-Light-Control
IR Remote menggunakan Arduino,

1. Arduino Uno

2. IR receiver (misalnya TSOP38238)

3. IR remote control

4. LED

5. Resistor 220 ohm

6. Kabel jumper

7. Breadboard
## Pengkabelannya 

## Langkah Pengerjaannya
1. Hubungkan IR receiver ke breadboard dan kemudian sambungkan kabel jumper dari pin VCC pada IR receiver ke pin 5V pada Arduino.

2. Sambungkan pin GND pada IR receiver ke pin GND pada Arduino.

3. Sambungkan pin OUT pada IR receiver ke pin 11 pada Arduino.

4. Sambungkan LED ke breadboard dan kemudian hubungkan pin positif (anoda) LED ke resistor 220 ohm dan kemudian sambungkan resistor ke pin 13 pada Arduino.

5. Hubungkan pin negatif (katoda) LED ke pin GND pada Arduino.

6. Ambil kodenya dari remote control yang ingin Anda gunakan dan catat kode tersebut. Anda dapat menggunakan library 7. IRremote pada Arduino IDE untuk membaca kode ini.

7. Buka Arduino IDE, buat program baru dan salin kode berikut ke dalam program:

<br>
https://github.com/fajarjulyana/Arduino-IR-Remote-Light-Control/blob/ad26065ba425878b5c32855679c4c216c5b35b4c/src/code.cpp#L1-L49
