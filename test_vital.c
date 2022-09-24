#include <stdio.h>
void main(void)
{
    char value = 0;
    while(value<256)
    {
        printf("value is %d\n",value);
        value++;
    }
    printf("value is 256\n");
}