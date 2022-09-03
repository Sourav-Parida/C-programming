//10. Write a program to print the cubes of the first N natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the cubes of the first N natural numbers in reverse order.");
    printf("\n\n");
    int i;
    printf("Enter how many cubes of the first natural numbers in reverse order to print:-");
    scanf("%d",&i);
    while (i>0){
        printf("\ncube of %d is :== %d ",i,i*i*i);
        i=i-1;
    }
getch();
}