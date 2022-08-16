#include<stdio.h>

int main()
{
  int grosspayment,basic,da,hra,da1,hra1;

  printf("enter basic salary:");
  scanf("%d",&basic);

  printf("enter DA:");
  scanf("%d",&da1);

  printf("enter HRA");
  scanf("%d",&hra1);

  da = (da1*basic)/100;
  hra = (hra1*basic)/100;
  
  grosspayment = basic+da+hra;
  printf("grosssalary:%d\n",grosspayment);
  

    return 0;
}