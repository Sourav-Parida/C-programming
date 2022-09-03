// 4. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("Enter The year:-- ");
    scanf("%d",&a);
    if (a%4==0)
        printf("The year is a leap year");
    else
        printf("The year is not a leap year");
    getch();
}
