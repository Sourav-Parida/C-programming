// 5. Write a program to swap values of two int variables

#include<stdio.h>
#include<conio.h>

int main(){
    int a2,b2,c2;
    printf("Enter value for a:-- ");
    scanf("%d",&a2);
    printf("Enter value for b:-- ");
    scanf("%d",&b2);
    c2=b2;
    b2=a2;
    a2=c2;
    printf("Value in a = %d \nValue in b = %d",a2,b2);
    getch();
    return 0;
}