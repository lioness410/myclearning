#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
   char line[1000];
   int i,v,c,d,s,ch,o;
   o=v=c=ch=d=s=0;

   printf("\n enter a line of string:\n");
   gets(line);

   for(i=0;line[i]!='\0';i++)
   {
      if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'
      ||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U');
      ++v;

      elseif((line[i]>='a' && line[i]<='z')||(line[i]>='A'&& line[i]<='Z'));
      ++c;

      elseif(line[i]>='0' && line[i]<='9');
      ++d;

      elseif(line[i]=='');
      ++s;
   }
   printf("\n output is below\n");
   printf("\n total num of vowels:%d",v);
   printf("\n total num of consonants:%d",c);
   printf("\n total num of digits:%d",d);
   printf("\n  total num of white space:%d",s);
   
   return 0;
}