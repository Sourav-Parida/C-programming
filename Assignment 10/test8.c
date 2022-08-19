//8. Write a program to print the cubes of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter how many cubes of first natural numbers to print:-");
    scanf("%d",&n);
    while (i<=n){
        printf("%d , ",i*i*i);
        i=i+1;
    }
getch();
}