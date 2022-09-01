//3. Write a program to find first digit of a given three digit number

#include<stdio.h>
#include<conio.h>

int main(){
    int n5;
    printf("Enter a 3 digit Number:-- ");
    scanf("%d",&n5);
    printf("the 1st digit of a 3 digit no is - %d",n5/100);
    getch();
    return 0;
}