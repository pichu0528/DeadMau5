#include "mbed.h"

Serial pc(SERIAL_TX, SERIAL_RX); // for debugging
PwmOut left1(D5); // left wheel
PwmOut left2(D3);

DigitalOut en(D7);
PwmOut right1(D9); // right wheel
PwmOut right2(D10);

void setLeftSpeed(float speed) {
    if (speed == 0) {
        left1 = 1;
        left2 = 1;   
    } else if (speed > 0) {
        left1 = speed;
        left2 = 0;   
    } else if (speed < 0) {
        left1 = 0;
        left2 = -speed;   
    }
}

void setRightSpeed(float speed) {
    if (speed == 0) {
        right1 = 1;
        right2 = 1;   
    } else if (speed > 0) {
        right2 = speed;
        right1 = 0;   
    } else if (speed < 0) {
        right2 = 0;
        right1 = -speed;   
    }
}

void setSpeed(float speed) {
    setLeftSpeed(speed);
    setRightSpeed(speed);   
}

int main() {
    en = 1;
    while (1) {
        printf("hello\n");
        setLeftSpeed(0.5);
        wait(2);
        setLeftSpeed(-.5);
        wait(2);
        setRightSpeed(0.5);
        wait(2);
        setRightSpeed(-.5);
        wait(2);
    }
}
