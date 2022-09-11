//  11. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
#include<conio.h>
int sum(int);

int main(){
    int n,x;
    printf("Recursive function to calculate sum of squares of first n natural numbers \n\n");
    printf("How many number to print:---");
    scanf("%d",&n);
    x=sum(n);
    printf("Sum of squares of first n natural numbers is := %d ",x);

}

int sum(int n){
    int S;
    if(n>1){
        S = n*n +sum(n-1);
        return S;
    }
    else
        return 1;
}