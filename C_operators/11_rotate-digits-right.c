/* 10.Write a program to take a three digit number from the user and rotate its digits by one
position towards the right.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a6,b6,c6,d6,e6;
    printf("Enter the 3 digit Number:-- ");
    scanf("%d",&a6);
    d6=a6%10;         //stores last digit
    b6=a6/10;
    c6=d6*100+b6;        
    printf("The no will be-- %d",c6);
    getch();
    return 0;
}