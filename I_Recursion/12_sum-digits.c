//  12. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
#include<conio.h>
int sum(int);

int main(){
    int n,x;
    printf("Recursive function to calculate sum of digits of a given number\n\n");
    printf("Enter the number to print sum of its digits:---");
    scanf("%d",&n);
    x=sum(n);
    printf("Sum of digits of a given number is := %d ",x);

}

int sum(int n){
    int S;
    if(n/10==0){
        return n;
    }
    else
        S= n%10 + sum(n/10);
        return S;

}