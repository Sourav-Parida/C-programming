/* 10.Write a program to take a three digit number from the user and rotate its digits by one
position towards the right.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter the Number:-- ");
    scanf("%d",&a);
    e=a%10;         // Last no.
    d=a%100;
    c=d/10;         // Middle no.
    b=a/100;        // Last no.
    printf("The no will be-- %d",(e*100)+(c*10)+b);
    getch();
}