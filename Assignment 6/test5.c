// 5. Write a program to swap values of two int variables

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    printf("Enter value for a:-- ");
    scanf("%d",&a);
    printf("Enter value for b:-- ");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("Value in a = %d, Value in b = %d",a,b);
    getch();
}