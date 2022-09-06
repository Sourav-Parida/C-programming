//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    printf("program to calculate sum of first N even natural numbers\n\n");
    int i=1;
    int n;
    printf("Enter no of first even natural no to be added:-");
    scanf("%d",&n);
    int e = 2;
    int s=0;
    while(i<=n){
        s=s+e;
        e=e+2;
        i=i+1;
    }
    printf("sum of first %d even natural numbers is:= %d",n,s);
getch();
}