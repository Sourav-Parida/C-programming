/*10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer.*/

#include<stdio.h>
#include<conio.h>
int main(){
    float phy,che,bio,math,comp;
    printf("Enter mark in Physics:--");
    scanf("%f",&phy);
    printf("Enter mark in Chemistry:--");
    scanf("%f",&che);
    printf("Enter mark in Biology:--");
    scanf("%f",&bio);
    printf("Enter mark in Mathmatics:--");
    scanf("%f",&math);
    printf("Enter mark in Computer:--");
    scanf("%f",&comp);
    float total= phy+che+bio+math+comp;
    float tp= total/5;
    printf("%f",tp);
    if (tp>=90)
        printf("Grade A");
    else if (tp>=80)
        printf("Grade B");
    else if (tp>=70)
        printf("Grade C");
    else if (tp>=60)
        printf("Grade D");
    else if (tp>=50)
        printf("Grade E");
    else
        printf("Grade F");
getch();
}