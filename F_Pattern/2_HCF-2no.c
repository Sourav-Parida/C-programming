// 2. Write a program to calculate HCF of two numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,n,i,hcf;
    printf("Enter 1st number to find HCF:--");
    scanf("%d",&a);
    printf("Enter 2nd number to find HCF:--");
    scanf("%d",&b);
    i=1;
    while(i<=a || i<=b){
        if(a%i==0 && b%i==0)
            hcf=i;
        i=i+1;
    }
    printf("HCF of %d and %d = %d",a,b,hcf);
        
        

}