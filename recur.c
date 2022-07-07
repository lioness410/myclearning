#include<stdio.h>

int per(int sc, int math, int san);

int main(){
int sc=180;
int math=120;
int san =150;
 
printf("per is %d",per(sc,math,san));
    return 0;
}
int per(int sc, int math, int san){
    return(sc+math+san)*100/600;
}
    


 
    
    