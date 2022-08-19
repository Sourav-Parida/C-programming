//Write a program to calculate the average of three numbers

#include<conio.h>
#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter one no.:- ");
    scanf("%f",&a);
    printf("Enter 2nd no.:- ");
    scanf("%f",&b);
    printf("Enter 3rd no.:- ");
    scanf("%f",&c);
    printf("Average of 3 numbers is:--- %f",(a+b+c)/3);
    return 0;
}