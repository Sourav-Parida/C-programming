//1.Write a program to print size of an int, a float, a char and a double type variable
#include<stdio.h>
#include<conio.h> 
int main(){
    int I,C,F,D;
    I=sizeof(int);
    C=sizeof(char);
    F=sizeof(float);
    D=sizeof(double);
    printf("\nSize of int:-    %d",I);
    printf("\nSize of char:-   %d",C);
    printf("\nSize of float:-  %d",F);
    printf("\nSize of double:- %d",D);
    getch();
    return 0;
}