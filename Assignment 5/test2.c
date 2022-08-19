//Write a program to calculate the area of a circle.
#include<conio.h>
#include<stdio.h>

int main() {
    float radi;
    float pi=3.14;
    printf("enter radious :--");
    scanf("%f",&radi);
    printf("Area of circle is :---%f",pi*radi*radi);
    getch();
    return 0;
}