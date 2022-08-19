//8. Write a program to print the cubes of first 10 natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    while (i<11){
        printf("%d , ",i*i*i);
        i=i+1;
    }
getch();
}