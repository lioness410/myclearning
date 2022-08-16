#include<stdio.h>


int main()
{
   float cel;
   float fah;

   printf("enter temperature in celsius:");
   scanf("%f",&cel);

   fah =(1.8*cel)+32;
   printf("temperature in fahrenheit:%f",fah);
   
   return 0;
}