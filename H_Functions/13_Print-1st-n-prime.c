//13. Write a function to print first N prime numbers (TSRN)
// not completed

#include<stdio.h>
#include<conio.h>

int nxtprime(int);
int prime(int);
void fprime(int);
int n1,n2,np,p,n;
int main(){
    printf("Function to print first N prime numbers (TSRN)\n\n");
    printf("Enter the number:--");
    scanf("%d",&n1);
    fprime(n2);
    return 0;
}
void fprime(int n3){
    int i=1,m=3;
    printf("%d ",m);
    while (i<=n3){
        n = nxtprime(m);
        printf("%d ",n);
        m = n;
    }

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
