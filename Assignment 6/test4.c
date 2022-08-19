//4. Write a program to find middle digit of a given three digit number

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter a 3 digit Number:-- ");
    scanf("%d",&a);
    b=a%100;
    c=b/10;
    printf("the 2st disit of a 3 digit no is - %d",c);
    getch();
}