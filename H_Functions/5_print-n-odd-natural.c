//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
#include<conio.h>

void natur(int);
int n,N;
int main(){
    printf("Enter the number of odd natural number to print:--");
    scanf("%d",&n);
    natur(n);
    return 0;
}
void natur(int n){
    int i=1;
    int m=1;
    while (i<=n){
        printf("%d ",m);
        m=m+2;
        i=i+1;
    }
}