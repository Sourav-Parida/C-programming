//Write a program to calculate the average of three numbers

#include<conio.h>
#include<stdio.h>

int main(){
    double a,b,c;
    printf("Enter one no.:- ");
    scanf("%lf",&a);
    printf("Enter 2nd no.:- ");
    scanf("%lf",&b);
    printf("Enter 3rd no.:- ");
    scanf("%lf",&c);
    printf("Average of 3 numbers is:--- %.3lf",(a+b+c)/3);
    getch();
    return 0;
}