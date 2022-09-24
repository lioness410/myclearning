#include <stdio.h>

//Delay of around 1 ms depends on system clock frequency
void delayms(int i)
{
 for(volatile unsigned long i = 0; i<100000; i++);
}

//Toggle pin
void toggle_pin(void)
{
    //Insert code for toggle pin
    printf("Toggle\n");
}
void main(void)
{
    int ms = 0, sec = 0;
    while(1)
    {
        delayms(1);
        if(ms > sec+1000)
        {
            //1 sec lapsed, Toggle pin
            toggle_pin();

            //Save milliseconds in var sec
            sec = ms;            
            if(sec > 10000)
            {
                //10 seconds elapsed exit
                break;
            } 
        }
        ms++;
    }
}