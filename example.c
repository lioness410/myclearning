#include<stdio.h>
#include<math.h>

int main()
{
  int amt,r2000=0,r500=0,r100=0,r50=0,r20=0,r10=0,r5=0,r2=0,r1=0,count=0;
 
  printf("enter the amount in rupees:\n\n");
  scanf("%d",&amt);
  
  while(amt>=2000)
  {
    r2000 = amt/2000;
    amt = amt % 2000;

    printf("\n total no of 2000rs notes:%d",r2000);
    break;
  }
  while(amt>=500)
  {
    r500 = amt/500;
    amt = amt % 500;

    printf("\n total no of 500rs notes:%d",r500);
    break;
  }
  while(amt>=100)
  {
    r100 = amt/100;
    amt = amt%100;
    
    printf("\n total no of 100rs notes:%d",r100);
    break;
  }
  while(amt>=50)
  {
    r50 = amt/50;
    amt = amt%50;

    printf("\n total no of 50rs notes:%d",r50);
    break;
  }
  while(amt>=20)
  {
    r20 = amt/20;
    amt = amt%20;

    printf("\n total no of 20rs notes:%d",r20);
    break;
  }
  while(amt>=10)
  {
    r10 = amt/10;
    amt = amt%10;

    printf("\n total no of 10rs notes:%d",r10);
    break;
  }
  while(amt>=5)
  {
    r5 = amt/5;
    amt = amt%5;

    printf("\n total no of 5rs notes:%d",r5);
    break;
  }
  while(amt>=2)
  {
    r2 =amt/2;
    amt = amt%2;

    printf("\n total no of 2rs notes:%d",r2);
    break;
  }
  while(amt>=1)
  {
    r1 =amt/1;
    amt = amt%1;

    printf("\n total no of 1rs notes:%d",r1);
    break;
  }
  count = r2000+r500+r100+r50+r20+r10+r5+r2+r1;
  printf("\n\n total number of notes require:%d",count);

  return 0;
}
