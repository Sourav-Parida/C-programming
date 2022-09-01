/* 10.Write a program to take a three digit number from the user and rotate its digits.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a6,b6,c6,d6,e6;
    printf("Enter the 3 digit Number:-- ");
    scanf("%d",&a6);
    e6=a6%10;         // Last no.
    d6=a6%100;
    c6=d6/10;         // Middle no.
    b6=a6/100;        // Last no.
    printf("The no will be-- %d",(e6*100)+(c6*10)+b6);
    getch();
    return 0;
}