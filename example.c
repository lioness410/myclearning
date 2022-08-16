#include<stdio.h>
int calpercentage(int sub1,int sub2,int sub3,int sub4,int sub5);

int main()
{
  int sub1= 78;
  int sub2= 89;
  int sub3= 67;
  int sub4= 91;
  int sub5= 88;

   printf("percentage is:%d",calpercentage(sub1,sub2,sub3,sub4,sub5));

   return 0;
}
int calpercentage(int sub1,int sub2,int sub3,int sub4,int sub5)
{
   return(sub1+sub2+sub3+sub4+sub5)/5;
}