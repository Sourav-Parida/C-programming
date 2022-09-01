//6. Write a program to swap values of two int variables without using third variable

#include<stdio.h>
#include<conio.h>

int main(){
    int a3,b3;
    printf("Enter value for a:-- ");
    scanf("%d",&a3);
    printf("Enter value for b:-- ");
    scanf("%d",&b3);
    a3=a3+b3;
    b3=a3-b3;
    a3=a3-b3;
    printf("Value in a = %d \nValue in b = %d",a3,b3);
    getch();
    return 0;
}
