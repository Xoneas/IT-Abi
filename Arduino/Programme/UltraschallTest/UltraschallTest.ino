#include "Ultraschall.h"
Ultraschall uLinks(6,A2);
Ultraschall uRechts(8,4);
void setup() {
 Serial.begin(9600);

}

void loop() {
 Serial.print("Weg Links: ");
 Serial.print(uLinks.getDistance());
 Serial.print("\t Weg Rechts: ");
 Serial.println(uRechts.getDistance());
 delay(500);
}
