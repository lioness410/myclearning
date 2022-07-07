#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float rad);
float rectangelArea(float a,float b);

int main(){
//float a =5.0;
//float b =10.0;

  // printf("Area is :% f",rectangelArea(a,b));

  //float side =4;
 // printf("area is:%f", squareArea(side));

 float rad = 6.0;
 printf("Area is :%f",circleArea(rad));

    return 0;
}

float squareArea(float side){
    return side * side;
}

float circleArea(float rad){
    return 3.14 * rad *rad;
}

float rectangelArea(float a,float b){
    return a*b;
}
 
 