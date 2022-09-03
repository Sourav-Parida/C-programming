// 1. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("program to check whether a given number is divisible by 3 and divisible by 2.");
    printf("\n\nEnter the no.:- ");
    scanf("%d",&a);
    if(a%3==0 && a%2)
        printf("The number is divisible by 3 and 2");
    else
        printf("The number is not divisible by 3 and 2");
getch();
}