// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    printf("program to calculate sum of first N odd natural numbers.\n\n");
    int i=1;
    int n;
    printf("Enter no of first odd natural no to be added:-");
    scanf("%d",&n);
    int e = 1;
    int s=0;
    while(i<=n){
        s=s+e;
        e=e+2;
        i=i+1;
    }
    printf("sum of first 5d odd natural numbers is:= %d ",n,s);
getch();
}