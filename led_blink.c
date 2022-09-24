#include "mbed.h"

DigitalOut led(LED2);
DigitalOut led1(LED3);

int main() {
    while (1) {
        led =!  led;
        printf("Blink! LED is now %d\n", led.read());
        //wait_ms(2500);
        
        if(led)
        {
            led1 = 0;
            printf("Blink! LED is now %d\n", led1.read());
        }
        else
        {
            led1 = 1;
            printf("Blink! LED is now %d\n", led1.read());
        }
        wait_ms(500);
    }
    
}
