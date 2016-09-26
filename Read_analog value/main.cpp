#include "mbed.h"
 
AnalogIn a0(A0);
DigitalOut d2(D2);

int main() {
    float val;
    while(1) {
        val = a0.read(); // Converts and read the analog input value (value from 0.0 to 1.0)
        d2 = 1;
        printf("val = %f mV\n", val);
        wait(0.2); // 500 ms
    }
}
