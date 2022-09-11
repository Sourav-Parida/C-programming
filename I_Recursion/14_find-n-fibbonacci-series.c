//  14. Write a recursive function to find the nth term of Fibonacci series.


#include<stdio.h>
#include<conio.h>

int fibo(int);

int main(){
    int n,x;
    printf("Enter the nth to find its value:---");
    scanf("%d",&n);
    x=fibo(n);
    printf("%d",x);

}

int fibo(int n){
    int a,b,f,x;
    if(n==1 ){
        return 0;
    }
    else if (n==2)
        return 1;
    else
        a=0;
        b=1;
        f= a+b;
        a=b;
        b=f;
        fibo(n-1);
        return f;
}