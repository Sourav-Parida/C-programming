#include<stdio.h>

void PRIME(int);
void main(){
    int n1;
    printf("Enter the number:--");
    scanf("%d",&n1);
    PRIME(n1);
}
void PRIME(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}