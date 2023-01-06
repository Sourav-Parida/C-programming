#include<stdio.h>

int FACTORIAL(int *);
void main(){
    int n,f;
    printf("Enter the number :");
    scanf("%d",&n);
    f= FACTORIAL(&n);
    printf("The factorial of the number is == %d",f);
}
int FACTORIAL(int * n){
    int i=1,fac = 1;
    while(i<=*n){
        fac=fac*i;
        i=i+1;
    }
    return fac;
}