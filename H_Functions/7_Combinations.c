/* 7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS) */

#include<stdio.h>
#include<conio.h>

int com(int,int);
int fac(int);
int n,c,r;
int main(){
    printf("Enter the number of combinations:--");
    scanf("%d",&n);
    printf("Enter the number of items selected:--");
    scanf("%d",&r);
    c= com(n,r);
    printf("The number of combinations == %d",c);
    return 0;
}
int com(int n,int r){
    int nf = fac(n);
    int rf= fac(r);
    int nrf = fac(n-r);
    c=nf/(rf*nrf);
    return c;
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