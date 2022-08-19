//6. Write a program to swap values of two int variables without using third variable

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("Enter value for a:-- ");
    scanf("%d",&a);
    printf("Enter value for b:-- ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value in a = %d, Value in b = %d",a,b);
    getch();
}
