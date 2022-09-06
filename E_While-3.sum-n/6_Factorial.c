// 6. Write a program to calculate factorial of a number

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to calculate factorial of a number.\n\n");
    int i=1;
    int n;
    printf("Enter the number to find factorial:-");
    scanf("%d",&n);
    int fac = 1;
    while(i<=n){
        fac=fac*i;
        i=i+1;
    }
    printf("Factorial of %d number is := %d ",n,fac);
getch();
}