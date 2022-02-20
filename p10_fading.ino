/*
 * Fading: Accensione e spegnimento (e viceversa) di un led su pin PWM passandoda valori di 0 a 255
 */


int ledPin = 9;    // LED connesso al pin digitale PWM

void setup() {
 // non necessita di alcuna informazione 
}

void loop() {
                    //  fade in aumento graduale dal minimo al massimo con incremento di 5 punti
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
                    // setta il valore (range da 0 a 255)
    analogWrite(ledPin, fadeValue);
    delay(50);      // attende 30 millisecondi per vedere l'effetto dimming
      }
                    //  fade in diminuzione graduale dal massimo al minimo con decremento di 5 punti
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
                    // setta il valore (range da 0 a 255)
    analogWrite(ledPin, fadeValue);
    delay(50);      // attende 30 millisecondi per vedere l'effetto dimming
  }
}
