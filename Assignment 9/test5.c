//5. Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

int main(){
    int i=10;
    while (i>0){
        printf("%d , ",2*i);
        i=i-1;
    }
getch();
}