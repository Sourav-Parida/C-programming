//Write a program to calculate the square of a given number.

#include<conio.h>
#include<stdio.h>

int main(){
    double a;
    printf("Enter no.:- ");
    scanf("%lf",&a);
    printf("square of the no. is:--- %.3f",a*a);
    getch();
    return 0;
}