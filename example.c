#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,fahrenheit;
  int x;
  printf("1.for fahrenheit to celsius\n");
  printf("2.for celsius to fahrenheit\n");
  printf("\n enter your choice\n:");
  scanf("%d\n",&x);

  switch(x)
  {
    case 1:
    printf("enter the value of fah.tem.");
    scanf("%f",&a);

    c = (a -32)*5/9;
    printf("%f\n",c);
    break;

    case 2:
    printf("enterthe valueof cel.tem.");
    scanf("%f",&b);

    c = (b*9/5) +32;
    printf("%f\n",c);
    break;

    default:
    printf("\n wrong choice.....try again");
  }
  
  return 0;
}
