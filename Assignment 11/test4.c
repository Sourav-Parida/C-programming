// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter no of squares of first natural no to be added:-");
    scanf("%d",&n);
    int s=0;
    int ss;
    while(i<=n){
        ss=i*i;           // stores squrares of no.
        s=s+ss;
        i=i+1;
    }
    printf("%d",s);
getch();
}