//7. Write a program to print the squares of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    printf("program to print the squares of first N natural numbers");
    printf("\n\n");
    int i=1;
    int n;
    printf("Enter how many squares of first natural numbers to print:-");
    scanf("%d",&n);
    while (i<=n){
        printf("\nsquare of %d is:== %d ",i,i*i);
        i=i+1;
    }
getch();
}