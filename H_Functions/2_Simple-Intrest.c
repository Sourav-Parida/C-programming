//2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
#include<conio.h>

int si(int,int,int);
int a,b,c,SI;
int main(){
    printf("Function to calculate simple interest (TSRS)\n\n");
    printf("Enter principal:--");
    scanf("%d",&a);
    printf("Enter rate:--");
    scanf("%d",&b);
    printf("Enter time:--");
    scanf("%d",&c);
    SI= si(a,b,c);
    printf("Simple intrest is = %d",SI);
    return 0;
}
int si(int p,int r,int t){
    int i;
    i=(p*r*t)/100;
    return i;
}