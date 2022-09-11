// 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
#include<conio.h>

int per(int,int);
int fac(int);
int n,p,r;
int main(){
    printf("Enter the number of combinations:--");
    scanf("%d",&n);
    printf("Enter the number of items selected:--");
    scanf("%d",&r);
    p= per(n,r);
    printf("The number of arrengements == %d",p);
    return 0;
}
int per(int n,int r){
    int nf = fac(n);
    int nrf = fac(n-r);
    p=nf/nrf;
    return p;
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