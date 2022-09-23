#include <Arduino.h> 
 

// My name is inderjeet singh, 000745250. I certify that this is my work and this work was not shared with my fellow class mates and
// have not copied any kind of information/data from someone that i used in this activity.

void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal;
  double val;
  double val1;
  String condition;
 
  // read digitized value from the D1 Mini's A/D convertor 
iVal = analogRead(A0); 
 
 val = map(iVal, 0,1023,0,5000);

 val1 = val/100; 

 if ( val1 < 10)
 {Serial.println(condition  = "Cold");}

  
   else if ( val1 > 10 && val1 < 15)
   {Serial.println(condition  = "Too Hot");}
   else if ( val1 > 15 && val1 < 25)
   {Serial.println(condition  = "perfect");}
   else if ( val1 > 25 && val1 < 30)
   {Serial.println(condition  = "Warm");}
   else if ( val1 > 30 && val1 < 35)
   {Serial.println(condition  = "Hot");}
   else if ( val1 > 35)
   {Serial.println(condition  = "Too Hot");}



// condition  = "Hot";

 analogWrite(9, iVal);
  // print value to the USB port 
  Serial.println("Digitized output of  = " + String(iVal) +  " is equivalent to a tem input of  " + val1 + " Deg. C,  Which is " + condition ) ; 
 

  delay(2000); 
} 