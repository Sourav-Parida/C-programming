//2. Write a program to print the first n natural numbers.

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter how many first natural numbers to print:-");
    scanf("%d",&n);
    while (i<=n){
        printf("%d , ",i);
        i=i+1;
    }
getch();
}