//1. Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter 1st value:-");
    scanf("%d",&a);
    printf("Enter 2nd value:-");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of A:-%d,Value of B:-%d",a,b);
    getch();
    return 0;
}