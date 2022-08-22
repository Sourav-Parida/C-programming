//1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
#include<conio.h>

float areacircle(float);
float a,c,area;
int main(){
    printf("Enter the radius of circle:--");
    scanf("%f",&a);
    area= areacircle(a);
    printf("%f",area);
    return 0;
}
float areacircle(float r){
    c=3.14*r*r;
    return c;
}
