// 7. Write a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter a Number:-- ");
    scanf("%d",&a);
    b=a%10;
    a=a-b;
    printf("the no will be :---- %d",a);
    getch();

}