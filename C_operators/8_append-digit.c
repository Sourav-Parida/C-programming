/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number.*/

#include<stdio.h>
#include<conio.h>

int main(){
    int a5,b5,c5;
    printf("Enter a Number:-- ");
    scanf("%d",&a5);
    printf("Enter a Number to append:-- ");
    scanf("%d",&b5);
    c5=(a5*10)+b5;
    printf("the no will be :--- %d",c5);
    getch();
    return 0;

}