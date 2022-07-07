#include<stdio.h>

int main()
{
    char a='0';
    if(a>= '1' && a <= '9' )
    {
        printf("Number is digit %c",a);
    }
   else 
    {
      printf("Number is NOT digit");
    }

    return 0;
}