//3. Write a program to find first digit of a given three digit number

#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter a 3 digit Number:-- ");
    scanf("%d",&a);
    printf("the 1st disit of a 3 digit no is - %d",a/100);
    getch();
}