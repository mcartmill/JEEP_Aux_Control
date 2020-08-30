/*Power circuit logic code
 * 
 * Monitors switched iginiton power 
 * using ATTiny85 chip
 * 
 * when ignition gets turned off, output stays on for delay time
 * and then gets turned off after delay is over.
 * 
 * Mike Cartmill
 * 09/13/2019
 * V0.1
 */

void setup() {
  // put your setup code here, to run once:
digitalWrite(0,HIGH);  //sets pin0 output to High
pinMode(0, OUTPUT);  //output pin
pinMode(1,INPUT);  //input pin

}

void loop() {
  

  while (digitalRead(1) == LOW){ //when pin1 goes low
  delay(5000); //waits for time in ms  (n/1000=seconds)
  digitalWrite(0,LOW);  //turn off output pin0
  }
}
