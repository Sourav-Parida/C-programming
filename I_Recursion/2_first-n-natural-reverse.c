// 2. Write a recursive function to print first N natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
void printN(int);

int main(){
    int n;
    printf("Recursive function to print first N natural numbers in reverse order\n\n");
    printf("How many number to print:---");
    scanf("%d",&n);
    printN(n);

}

void printN(int n){
    if(n>0){
        printf("%d ",n);
        printN(n-1);
    }
    
}