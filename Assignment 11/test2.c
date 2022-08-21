//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
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
    printf("%d",s);
getch();
}