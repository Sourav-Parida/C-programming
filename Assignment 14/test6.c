//6. Write a function to calculate the factorial of a number.(TSRS)

#include<stdio.h>
#include<conio.h>

int fac(int);
int n,N,f;
int main(){
    printf("Enter the number to find factorial:--");
    scanf("%d",&n);
    f= fac(n);
    printf("The factorial of the number is == %d",f);
    return 0;
}
int fac(int n){
    int i=1;
    int fac = 1;
    while(i<=n){
        fac=fac*i;
        i=i+1;
    }
    return fac;
}