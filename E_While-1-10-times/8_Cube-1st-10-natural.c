//8. Write a program to print the cubes of first 10 natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the cubes of first 10 natural numbers");
    printf("\n\n");
    int i=1;
    while (i<11){
        printf("%d  ",i*i*i);
        i=i+1;
    }
getch();
}