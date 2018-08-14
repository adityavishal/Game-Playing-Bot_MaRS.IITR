
        Abstract

Rock-Paper-Scissor is a semi automated bot. It consists of a mechanical palm to reflect stone,paper or scissor. A glove is used to take input from the opponent . The palm is controlled using Arduino,Linear actuators and wires. The glove consists off Flex Sensors to obtain input and then reflect the output as per the code. It is designed in such a way that it will win against you everytime.

      ACKNOWLEDGEMENT:

We would like to express our special thanks of gratitude to our mentors Alok Gupta, Utkarsh Deepak as well as our guide and senior mentor Shivam Shrivastava(EE 4th year & secretary, Models and Robotics Section) and Bhaskar Kaushik (EE 4th Year) who gave us the golden opportunity to do this wonderful project which helped us in doing a lot of research and we came to know about many new things.

         HARDWARE:

The mechanical design of bot includes :

 (1)3D printed Hand

(2) 2*linear Actuators

(3) badminton Strings

(4) Arduino  UNO

(5) 2*	12V dc Adapters

(6)2* Motor Driver

(7) 3*Flex Sensor

(8)Arduino nano

(9)Breadboard

(10)Jumper wires

(11)9V battery		

(12) Resistors		
		
(13)Perforated circuit board

(14)2* HC 05 bluetooth module

(15)Rainbow wires

    SOFTWARE

        
        •	ARDUINO IDE


---------------------------------------------------------------------------------------------------------------------------------------

        PROCEDURE		
               
               •	Completing the glove
	     
---------------------------------------------------------------------------------------------------------------------------------------


![Glove Design](https://github.com/adityavishal/Game-Playing-Bot_MaRS.IITR/blob/master/Images/Project%20Images/Glove%20Design.jpg?raw=true)
	     

1.	First of all, solder each pin of the flex sensor to one end of a rainbow wire. Then, solder the other pin of each of the three sensors to one common wire.
This is the setup for the sensor that detects the hand’s movements.

2.	Now stitch the flex sensors using thread, one by one on the thumb, index finger and on the middle finger.

3.	Put on the glove and test if the sensors have enough room to move up and down.

4.	Build the circuit according to the schematic shown

5.	Attach the Bluetooth module (HC-05) and the battery in the Arduino Nano as shown. Be careful to attach a voltage divider if your 
Bluetooth module accept only 3.3V. HC 05 has been seen to work directly with 5v input . But for safety , use  voltage divider.

6.	Once the circuit is working perfectly , make the circuit on perforated circuit board.

---------------------------------------------------------------------------------------------------------------------------------------

                Building the hand movement electronics

1.	 Build the circuit according to the schematic shown below.

2.	Connect the motor drivers according to schematic shown. Make sure both the motor drivers are powered using different adapters otherwise they may not function properly.

3.	Follow the link given below to configure the two modules:

https://howtomechatronics.com/tutorials/arduino/how-to-configure-pair-two-hc-05-bluetooth-module-master-slave-commands/

4.	The actuators usually generate a lot of heat so watch out for any heating in the solenoids or in the motor driver or they may burn out.

5.	At this stage, the electronics portion of the robotic hand is complete.



thumb1=5,thumb2=6,index1=12,index2=13,pwm_thumb=10,pwm_index=11		-> pin no.

---------------------------------------------------------------------------------------------------------------------------------------

          WORK :

The palm is connected with several strings in different finger which are futher connected to linear actuators . The strings of middle finger and index fingers are joined together and for other three also joined so we have to use only 2 linear actuators . It worked as if there is a change of length dx at one end then same will at other so finger moved. Linear actuator worked according to the code fed through arduino.

The flex sensors which are fitted in the glove of opponent bend and its ressistance changes. We built the circuit in such a way that the change in resistance causes change in potential difference . This potential difference is measured from analog input pins . There are different set of range of values for each flex for stone, paper and scissors . We observed these values and mapped them from 0 to 90. These values were compared to see if we drew stone , paper or scissors . characters – a,b,c  were sent by hc 05 module signifying that the human hand drew ston,paper or scissor respectively.

The module hc 05 connected to robot hand received those characters and actuated the linear actuators accordingly to give the appropriate response i.e for stone-paper,for scissors-stone,etc.

          HINT: 


For stone- both index (and middle finger) and thumb (and ring finger) are bent.
For paper- both index (and middle finger) and thumb (and ring finger)  are stretched.
For scissors- index (and middle finger)  is stretched while thumb (and ring finger) is bent.
These 3 different conditions can be noticed from change in potential difference in flex sensors. 
To configure hc 05 use AT commands. See that parity bit and baud rate is same in both the modules.

---------------------------------------------------------------------------------------------------------------------------------------
        FUTURE SCOPE

1.	This bot has a very good scope in various fields, say medical fields, intelligent design of robots, etc. It can also be used to further the technology of fine mechanical design for human parts of the body and can be used to develop humanoid robots.

2.	An intelligent response system powered by artificial intelligence would enable us to interact with the future robots.


---------------------------------------------------------------------------------------------------------------------------------------

          FUTURE IMPROVEMENTS:

1. For indepent control of each finger , 5 seperate servos can be used

2.  Instead of using flex sensors we could have used camera to detect opponents move

---------------------------------------------------------------------------------------------------------------------------------------

            TEAM MEMBERS :

1 Mridul Agarwal	(17117048)

2 Kunal Kumar		(17113057)

3 Vishal Rai		(17117097)

4 Utkarsh Mishra	(17117093)

5 Divyansh Ruhela	(17113037)

6 Jay Modi		(17113049)

            MENTORS :

1 Alok Gupta		(16117010)

2 Utkarsh Deepak

3 Shivam Shrivastava

4 Bhaskar Kaushik

                      Thank You!!!

