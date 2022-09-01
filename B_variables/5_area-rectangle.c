//Write a program to calculate the area of a rectangle
#include<conio.h>
#include<stdio.h>

int main(){
    double l,b;
    printf("Enter length:- ");
    scanf("%lf",&l);
    printf("Enter bridth:- ");
    scanf("%lf",&b);
    printf("Area of rectangle is:--- %.2lf",l*b);
    getch();
    return 0;
}