//Write a program to calculate the simple interest
#include<conio.h>
#include<stdio.h>

int main(){
    float P,T;
    float R = 8.5;
    printf("Enter principal:- ");
    scanf("%f",&P);
    printf("Enter time period:- ");
    scanf("%f",&T);
    printf("Interest Amount is :--- %f",(P*R*T)/100);
    return 0;
}