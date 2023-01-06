#include<stdio.h>
int DIGITSUM(int);
// recursion
int main(){
    int n,x;
    printf("Enter the number :---");
    scanf("%d",&n);
    x=DIGITSUM(n);
    printf("Sum of digits is := %d ",x);
}
int DIGITSUM(int n){
    int S;
    if(n/10==0){
        return n;
    }
    else{
        S= n%10 + DIGITSUM(n/10);
        return S;
    }
}