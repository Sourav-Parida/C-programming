// 4. Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
#include<conio.h>

void natur(int);
int n,N;
int main(){
    printf("Enter the number of natural no to print:--");
    scanf("%d",&n);
    natur(n);
    return 0;
}
void natur(int n){
    int i=1;
    while (i<=n){
        printf("%d ",i);
        i=i+1;
    }
}