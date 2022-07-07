#include<stdio.h>

void namste();
void bok();

int main(){
  
  printf("enter c for croatia & i for india");
  char ch;
  scanf("%c",&ch);
   if (ch=='i'){

    namste();
 } else{
    bok();
 }
  
     return 0;
}

void namste(){

printf("namste");
}
 void bok(){
    printf("bok");
 }