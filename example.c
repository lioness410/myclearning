#include<stdio.h>

int main()
{
  int a= 56;
  int b= 56;
  int c= 56;

  if( a>b && a>c)
  {
    printf("greater no.:%d",a);
  }
  else if(b>a && b>c)
  {
    printf("greater no:%d",b);
  }
  else if(c>a && c>b)
  {
    printf("greater no:%d",c);
  }
  else if((a==b)&&(b==c)&&(c==a))
  {
    printf("all are equal");
  }
    return 0;
}