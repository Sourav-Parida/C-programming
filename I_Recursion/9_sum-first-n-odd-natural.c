// 9. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>
int sum(int);

int main(){
    int n,x;
    printf("Recursive function to calculate sum of first N odd natural numbers\n\n");
    printf("How many number to add:---");
    scanf("%d",&n);
    x=sum(n);
    printf("Sum of first N odd natural numbers is:= %d ",x);

}

int sum(int n){
    int S;
    if(n>1){
        S = (n-1)*2+1 +sum(n-1);
        return S;
    }
    else
        return 1;
}