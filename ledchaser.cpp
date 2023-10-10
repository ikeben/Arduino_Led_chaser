/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
/*#define A0 14 
#define A1 15
#define A2 16
#define A3 17
#define A4 18
#define A5 19 */   
int pins[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13, A0, A1, A2, A3, A4, A5};
int i;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(13, OUTPUT); pinMode(12, OUTPUT);pinMode(11, OUTPUT);pinMode(10, OUTPUT); pinMode(9, OUTPUT);
  for(int i=0; i<21;i++){
    pinMode(pins[i], OUTPUT);
  }

}

// the loop function runs over and over again forever
void loop() {
   for(int i=0; i<21;i++){
  digitalWrite(pins[i,i+1, i+2], HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(50);                      // wait for a second
  digitalWrite(pins[i], LOW);   // turn the LED off by making the voltage LOW
  delay(50);
  }
  for(int j=21; j>=0;j--){
  digitalWrite(pins[j], HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(50);                      // wait for a second
  digitalWrite(pins[j,j+1, j+2], LOW);   // turn the LED off by making the voltage LOW
  delay(50);
  }        
  /*digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
    digitalWrite(12, HIGH); 
  delay(100);                      
  digitalWrite(12, LOW);   
  delay(100);  
    digitalWrite(11, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(11, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                   
    digitalWrite(10, HIGH);  
  delay(100);                      
  digitalWrite(10, LOW);   
  delay(100);  
    digitalWrite(9, HIGH);  
  delay(100);                      
  digitalWrite(9, LOW);   
  delay(100);*/                                            
}
