#include "mbed.h"
 DigitalOut myLED (D2);
 Serial serial (USBTX, USBRX);
 int main ()
 {
 serial.printf ("Start Program \n \r");
 while (1)
 {
 myLED = 1;
 wait (0.2);
 myLED = 0;
 wait (1.0);
 }
 }