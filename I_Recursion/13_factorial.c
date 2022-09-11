// 13. Write a recursive function to calculate factorial of a given number
// Not completed

#include<stdio.h>
#include<conio.h>

int fact(int);

int main(){
    int n,x;
    printf("Recursive function to calculate factorial of a given number\n\n");
    printf("Enter the number to find its factorial:---");
    scanf("%d",&n);
    x=fact(n);
    printf("factorial of %d is := %d ",n,x);

}

int fact(int n){
    if(n==0){
        return 1;
    }
    else
        return n*fact(n-1);
}