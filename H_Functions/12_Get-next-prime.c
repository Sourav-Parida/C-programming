//12. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
#include<conio.h>

int nxtprime(int);
int prime(int);
int n1,np,p;
int main(){
    printf("Function to find the next prime number of a given number (TSRS)\n\n");
    printf("Enter the number:--");
    scanf("%d",&n1);
    np= nxtprime(n1);
    printf("%d",np);
    return 0;
}
int nxtprime(int n){
    while(n){
        p= prime(n+1);
        if(p==1)
            return n+1;
        else 
            n=n+1; 
    } 
}
int prime(int n){
    int i=2;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        p=1;
    else
        p=0;
    return p;
}