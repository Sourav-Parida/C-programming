// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>
#include<conio.h>

int main(){
    double USD,Amount;
    printf("Enter amount in INR :-- ");
    scanf("%lf",&Amount);
    USD=Amount/76.23;
    printf("Amount in USD is :--- %.3lf",USD);
    getch();
    return 0;

}