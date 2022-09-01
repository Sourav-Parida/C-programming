//2. Write a program to find last digit of a given number

#include<stdio.h>
#include<conio.h>

int main(){
    int n4;
    printf("Enter a Number:-- ");
    scanf("%d",&n4);
    printf("last digit of the Number is - %d",n4%10);
    getch();
    return 0;
}