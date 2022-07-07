#include<stdio.h>

int main(){
     int sum = 0;
    for(int i=1 ; i<=10 ; i=i+1)
    {
        sum = i+sum;   
    }
    printf("%d\n", sum);
    return 0;
}