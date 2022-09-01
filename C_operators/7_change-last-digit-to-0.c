// 7. Write a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
#include<conio.h>

int main(){
    int a4,b4,c4;
    printf("Enter a Number:-- ");
    scanf("%d",&a4);
    b4=a4%10;
    a4=a4-b4;
    printf("the changed number is:---- %d",a4);
    getch();
    return 0;

}