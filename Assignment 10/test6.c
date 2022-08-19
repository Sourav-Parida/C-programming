//6. Write a program to print the first N odd natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter how many first odd natural numbers to print:-");
    scanf("%d",&n);
    int m=1;
    while (i<=n){
        printf("%d , ",m);
        m=m+2;
        i=i+1;
    }
getch();
}