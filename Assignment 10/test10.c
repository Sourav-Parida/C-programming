//10. Write a program to print the cubes of the first N natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    printf("Enter how many cubes of the first natural numbers in reverse order to print:-");
    scanf("%d",&i);
    while (i>0){
        printf("%d , ",i*i*i);
        i=i-1;
    }
getch();
}