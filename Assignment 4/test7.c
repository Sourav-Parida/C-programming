/*Write a C program containing declaration of three variables (of type int, char and
float), also assign some values to them and print values of all three variables using
single printf().*/
# include<stdio.h>
#include<conio.h>

int main(){
    int Age;
    printf("enter age:-");
    scanf("%d",&Age);
    float Mark;
    printf("Enter Mark:-");
    scanf("%f",&Mark);
    printf("Age is%d\nmark is%f\n",Age,Mark);
    getch();

    return 0;
}