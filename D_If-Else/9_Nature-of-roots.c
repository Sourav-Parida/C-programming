//9. Write a program to find the nature of roots of a quadratic equation.

#include<stdio.h>
#include<conio.h>
int main(){
    int b,a,c,d;
    printf("Program to find the nature of roots of a quadratic equation.");
    printf("\n\nEnter value of b:--");
    scanf("%d",&b);
    printf("Enter value of c:--");
    scanf("%d",&c);
    printf("Enter value of a:--");
    scanf("%d",&a);
    d=(b*b)-(4*a*c);
    if (d>0)
        printf("Real and unequal roots");
    else if (d==0)
        printf("Real and equal roots");
    else
        printf("No real roots");
getch();
}