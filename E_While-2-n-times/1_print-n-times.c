//1. Write a program to print MySirG N times on the screen.

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print MySirG N times on the screen.");
    printf("\n\n");
    int i = 1;
    int n;
    printf("Enter how many times to print MySirG:-");
    scanf("%d",&n);
    while(i<=n){
        printf("MySirG  ");
        i=i+1;
    }
getch();
}