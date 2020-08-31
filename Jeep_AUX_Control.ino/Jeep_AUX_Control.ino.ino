/*
 * 08/30/2020  date created
 * Version 0.1
 * 
 * 
 * 
 * Proof of concept code
 * 
 *
 * 
 * ATMega328P-PU chipset
 * Using Arduino Uno 
 * 
 * 
 * 
 * Using just chip and 16.00 MHZ crystal with 22pF caps to ground
*/



#include <Nextion.h>  //  https://github.com/itead/ITEADLIB_Arduino_Nextion





// Declare buttons

NexDSButton bt0 = NexDSButton(0, 1, "bt0");   // Dual state button added
NexDSButton bt1 = NexDSButton(0, 2, "bt1");
NexDSButton bt2 = NexDSButton(0, 3, "bt2");  
NexDSButton bt3 = NexDSButton(0, 4, "bt3");
NexDSButton bt4 = NexDSButton(0, 5, "bt4");
NexDSButton bt5 = NexDSButton(0, 6, "bt5");




// Declare touch event objects: 

NexTouch *nex_listen_list[] = 
{
  &bt0,  // dual utton added
  &bt1,
  &bt2,
  &bt3,
  &bt4,
  &bt5,
  //&b0 = button, &bt0 = Dual state button


  NULL  // String terminated
}; 




// Touch event actions:

void bt0PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light0 = 0;  // Create variable for button
  bt0.getValue(&light0);  // Read value of button

  if(light0 == 1){
    digitalWrite(4, HIGH);  
  }else{  // 
    digitalWrite(4, LOW); 
  }
}

void bt1PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light1 = 0;  // Create variable for button
  bt1.getValue(&light1);  // Read value of button

  if(light1 == 1){
    digitalWrite(5, HIGH);  
  }else{  // 
    digitalWrite(5, LOW); 
  }
}

void bt2PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light2 = 0;  // Create variable for button
  bt2.getValue(&light2);  // Read value of button

  if(light2 == 1){
    digitalWrite(6, HIGH);  
  }else{  // 
    digitalWrite(6, LOW); 
  }
} 

void bt3PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light3 = 0;  // Create variable for button
  bt3.getValue(&light3);  // Read value of button

  if(light3 == 1){
    digitalWrite(7, HIGH);  
  }else{  // 
    digitalWrite(7, LOW); 
  }
}

void bt4PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light4 = 0;  // Create variable for button
  bt4.getValue(&light4);  // Read value of button

  if(light4 == 1){
    digitalWrite(8, HIGH);  
  }else{  // 
    digitalWrite(8, LOW); 
  }
}

void bt5PushCallback(void *ptr)  // Press event for dual state button bt0
{
  uint32_t light5 = 0;  // Create variable for button
  bt5.getValue(&light5);  // Read value of button

  if(light5 == 1){
    digitalWrite(9, HIGH);  
  }else{  // 
    digitalWrite(9, LOW); 
  }
} 



void setup()  // Start of setup
{

  Serial.begin(115200);  // Set baud rate and start serial comms
  


  // Register touch events:

 bt0.attachPush(bt0PushCallback);  // Dual state button press
 bt1.attachPush(bt1PushCallback);
 bt2.attachPush(bt2PushCallback);
 bt3.attachPush(bt3PushCallback);
 bt4.attachPush(bt4PushCallback);
 bt5.attachPush(bt5PushCallback);
 
  // End of registering the event callback functions

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}  // End of setup


void loop()  // Start of loop
{
  nexLoop(nex_listen_list);  // Check for any touch event
}

  // End of loop
