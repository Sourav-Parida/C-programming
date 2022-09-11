// 1. Write a recursive function to print first N natural numbers.

#include<stdio.h>
#include<conio.h>
void printN(int);

int main(){
    int n;
    printf("Recursive function to print first N natural numbers\n\n");
    printf("How many number to print:---");
    scanf("%d",&n);
    printN(n);

}

void printN(int n){
    if(n>0){
        printN(n-1);
        printf("%d ",n);
    }
    
}