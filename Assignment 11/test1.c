// Write a program to calculate sum of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter no of first natural no to be added:-");
    scanf("%d",&n);
    int s=0;
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    printf("%d",s);
getch();
}