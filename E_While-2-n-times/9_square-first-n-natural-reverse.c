//9. Write a program to print the squares of first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to print the squares of first N natural numbers in reverse order");
    printf("\n\n");
    int i;
    printf("Enter how many squares of first natural numbers in reverse order to print:-");
    scanf("%d",&i);
    while (i>0){
        printf("\nsquare of %d is :== %d ",i,i*i);
        i=i-1;
    }
getch();
}