// 2. Write a program to check whether a given number is divisible by 7 or divisible by 3.


#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter the no.:- ");
    scanf("%d",&a);
    if(a%7==0)
        if(a%2==0)
            printf("The number is divisible by 7 and 3");
        else
            printf("The number is not divisible by 2");
        if(a%7!=0)
            printf("The number is not divisible by 7 and 3");
getch();
}