//3. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
#include<conio.h>

int main(){
    float a;
    printf("Enter a Number:-- ");
    scanf("%f",&a);
    if (a>0)
        printf("The number is positive");
    else if (a<0)
        printf("The number is negative");
    else
        printf("The number is zero");
    getch();
}
