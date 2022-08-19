//1. Write a program to print MySirG N times on the screen.

#include<stdio.h>
#include<conio.h>

int main(){
    int i = 1;
    int n;
    printf("Enter how many times to print MySirG:-");
    scanf("%d",&n);
    while(i<=n){
        printf("MySirG, ");
        i=i+1;
    }
getch();
}