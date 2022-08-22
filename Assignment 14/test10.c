//10. Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>
#include<conio.h>

int HCF(int,int);
int n1,n2,h;
int main(){
    printf("Enter the 1st number:--");
    scanf("%d",&n1);
    printf("Enter the 2nd number:--");
    scanf("%d",&n2);
    h= HCF(n1,n2);
    printf("The HCF of the numbers is == %d",h);
    return 0;
}
int HCF(int a,int b){
    int i,hcf;
    i=1;
    while(i<=a || i<=b){
        if(a%i==0 && b%i==0)
            hcf=i;
        i=i+1;
    }
    return hcf;
}