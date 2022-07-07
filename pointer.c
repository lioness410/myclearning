#include<stdio.h>

int main()
{
    int age=18;
    int *ptr;

    ptr = &age;
    
    //printf("0x%x",ptr);
    printf("%p",*(&(*ptr)));
    return 0;
}