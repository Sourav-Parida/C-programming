#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

void main(){                              // TSRS
    int x,y,sum,subs,mult,divi;
    printf("Enter two numbers:");
    scanf("%d,%d",&x,&y);
    sum=add(x,y);
    subs=sub(x,y);
    mult=mul(x,y);
    divi=div(x,y);
    printf("Addition is :%d",sum);
    printf("\nSubtraction is :%d",subs);
    printf("\nMultiplication is :%d",mult);
    printf("\nDivision is :%d",divi);
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;;
}