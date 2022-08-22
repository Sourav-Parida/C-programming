// 11. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>
#include<conio.h>

int prime(int);
int n1,p;
int main(){
    printf("Enter the number:--");
    scanf("%d",&n1);
    p= prime(n1);
    //printf("%s",p);
    if(p==1)
        printf("%d is a prime number",n1);
    else
        printf("%d is prime is not a number",n1);  
    return 0;
}
int prime(int n){
    int i=2;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        p=1;
        //p= printf("%d is a prime number",n);
    else
    p=0;
       // p= printf("%d is not a prime number",n);
    return p;


}