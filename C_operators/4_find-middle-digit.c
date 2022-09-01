//4. Write a program to find middle digit of a given three digit number

#include<stdio.h>
#include<conio.h>

int main(){
    int a1,b1,c1;
    printf("Enter a 3 digit Number:-- ");
    scanf("%d",&a1);
    b1=a1%100;
    c1=b1/10;
    printf("the 2st disit of a 3 digit no is - %d",c1);
    getch();
    return 0;
}