//Write a program to calculate the simple interest
#include<conio.h>
#include<stdio.h>

int main(){
    double P,T,M,Y,R;
    printf("Enter principal:- ");
    scanf("%lf",&P);
    printf("Enter the Time (no. of years):- ");
    scanf("%lf",&Y);
    printf("Enter the Time(no. of Months):- ");
    scanf("%lf",&M);
    printf("Enter the Rate of Intrest:- ");
    scanf("%lf",&R);
    T=Y+(M/12);
    printf("Interest Amount is :--- %.3lf",(P*R*T)/100);
    getch();
    return 0;
}