//4. Write a program to print the first 10 even natural numbers.

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the first 10 even natural numbers.");
    printf("\n\n");
    int i=1;
    while (i<11){
        printf("%d  ",2*i);
        i=i+1;
    }
getch();
}