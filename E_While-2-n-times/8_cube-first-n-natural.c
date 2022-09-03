//8. Write a program to print the cubes of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the cubes of first N natural numbers");
    printf("\n\n");
    int i=1;
    int n;
    printf("Enter how many cubes of first natural numbers to print:-");
    scanf("%d",&n);
    while (i<=n){
        printf("\ncube of %d is :== %d  ",i,i*i*i);
        i=i+1;
    }
getch();
}