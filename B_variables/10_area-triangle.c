/*10. Write a program to calculate the area of a triangle where base and height of the
triangle are given..*/

#include<conio.h>
#include<stdio.h>

int main(){
    double base,height,area;
    printf("Enter the base:- ");
    scanf("%lf",&base);
    printf("Enter the height:- ");
    scanf("%lf",&height);
    area = 0.5*base*height;
    printf("area of the triangle is :--%.3lf",area);
    getch();
    return 0;
}