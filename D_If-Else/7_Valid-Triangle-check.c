/*7. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
#include<conio.h>
int main(){
    float l1,l2,l3;
    printf("Display whether the triangle is valid or not.");
    printf("\n\nEnter 1st length:--");
    scanf("%f",&l1);
    printf("Enter 2nd length:--");
    scanf("%f",&l2);
    printf("Enter 3rd length:--");
    scanf("%f",&l3);
    if (l1+l2>l3  &&  l2+l3>l1  && l3+l1>l2)
        printf("triangle is valid");
    else
        printf("Triangle is invalid");
getch();

}