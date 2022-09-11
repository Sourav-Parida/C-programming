// 1. Write a program to print first N terms of a Fibonacci series.

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,n,i;
    printf("Enter no of terms to print in febonacci series:--");
    scanf("%d",&n);
    i=1;
    a=0;
    b=1;
    printf("0 1 ");
    while(i<=(n-2)){
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    i=i+1;
    }
}



