//Write a program to calculate the area of a circle.
#include<conio.h>
#include<stdio.h>

int main() {
    double radi;
    double pi=3.14;
    printf("enter radious :--");
    scanf("%lf",&radi);
    printf("Area of circle is :---%.3lf",pi*radi*radi);
    getch();
    return 0;
}