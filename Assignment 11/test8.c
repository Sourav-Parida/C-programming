// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
#include<conio.h>

int main(){
    int n,yes,no;
    printf("Enter the number to find no is prime or not:-");
    scanf("%d",&n);
    int i=2;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        printf("%d is a prime number",n);
    else
        printf("%d is prime is not a number",n);
    
}