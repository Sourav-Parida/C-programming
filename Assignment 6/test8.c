/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter a Number:-- ");
    scanf("%d",&a);
    printf("Enter a Number to append:-- ");
    scanf("%d",&b);
    c=(a*10)+b;
    printf("the no will be :--- %d",c);
    getch();

}