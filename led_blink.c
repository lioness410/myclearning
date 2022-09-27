
#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);

void led1_toggle(void);
void led2_toggle(void);
void led3_toggle(void);
void led4_toggle(void);

int main()
{
    while(1)
    {
        led1_toggle();
        led2_toggle();
        led3_toggle();
        led4_toggle();
        led4_toggle();
        led3_toggle();
        led2_toggle();
        led1_toggle();
    }
}
void led1_toggle(void)
{
    led1 = !led1;
    if(led1)
    {
        led2=0;
        led3=0;
        led4=0;
    }
    printf("Blink! LED is now:%d\n",led1.read());
    
    wait_ms(500);
}
void led2_toggle(void)
{
    led2 = !led2;
    if(led2)
    {
        led1=0;
        led3=0;
        led4=0;
    }
    printf("Blink! LED is now:%d\n",led2.read());
    
    wait_ms(500);
} 
void led3_toggle(void)
{
    led3 = !led3;
    if(led3)
    {
        led1=0;
        led2=0;
        led4=0;
    }
    printf("Blink! LED is now:%d\n",led3.read());
    
    wait_ms(500);
}
void led4_toggle(void)
{
    led4 = !led4;
    if(led4)
    {
        led1=0;
        led2=0;
        led3=0;
    }
    printf("Blink! LED is now:%d\n",led4.read());
    
    wait_ms(500);
}
    
    
    
    
    
    
    

