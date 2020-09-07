# JEEP_Aux_Control
Control for aux accessories like additional lighting using a touchscreen control.

Goal

I am creating an open source solution to controlling additional electronic components such as lights.  

Conditions:
1.    Must be stand alone, not connecting to existing systems of the Jeep.
2.    Easy to customize
3.    Low Cost
4.    All documents available for anyone to use (code, PCB files, GRB files)
5.    Allow others to add to the documentation for functionality and defects

____________________________________________________________________________________
MCU Code

Code uses Ardiuno code for ease of use.
Jeep_AUX_Control.ino.ino

____________________________________________________________________________________
Touchscreen Code

Since using Nextion screen, UI code uses Nextion Editor Software - Free and easy to use.


____________________________________________________________________________________

Power Circuit code

Code for power circuit using ATTiny85 - attiny85powerlogicv0.1.ino

Power Circuit Theory of Operations

12V constant and 12V switched (identified as ignition in this document) comes into the circuit.  These are regulated down to 5V constant, 5V ignition, and 5V Ignition w/Delay off.

ATTiny85 is used to control 5V Ignition w/Delay by monitoring 5V Ignition into digital pin 0.  When digital pin 0 goes low, the chip sees this as ignition is off and then runs a delay and then sets digital pin 1 to low, which is the output that controls a transistor as a switch for the 5V Ignition w/Delay.

ATTiny85 Pinout
Pin4 = GND
Pin5= Digital Pin 0 = Input from 5V ignition
Pin6= Digital Pin 1 = Output to control transistor for delayed 5V ignition
Pin8= VCC (5V Constant)



Theory of Operations for ATTiny85 Code

Digital Pin0 = input
Digital Pin1 = output = init high

While pin0 is low then pin1==LOW



____________________________________________________________________________________
PCB

PCB files made in Eagle CAD.  Include ready to print files for https://jlcpcb.com/

Power Circuit PCB - power reg 5v_2019-04-10.zip

Control PCB JEEP_Aux_Control_PCB.brd and JEEP_Aux_Control_PCB.sch




____________________________________________________________________________________
BOM

BOM along with sources for parts
 
Control Board BOM
https://www.mouser.com/ProjectManager/ProjectDetail.aspx?AccessID=32fda13301
 
Touchscreen
https://www.amazon.com/Nextion-NX4024T032-Display-Arduino-Raspberry/dp/B07QYRB38T/ref=sr_1_5?dchild=1&keywords=nextion+display&qid=1599437750&sr=8-5
 
Relays
https://www.amazon.com/ONLINE-LED-STORE-Pack-Interlocking/dp/B01KVZ2MU4/ref=sr_1_8?crid=1BJ267T4AIGVN&dchild=1&keywords=bosch+relay+12v&qid=1599437842&sprefix=bosch+relay%2Caps%2C187&sr=8-8



____________________________________________________________________________________
3D models



____________________________________________________________________________________
Github file location:

https://github.com/mcartmill/JEEP_Aux_Control


____________________________________________________________________________________
Youtube videos

https://youtu.be/mUTJI6I0mCo
