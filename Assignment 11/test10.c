//10. Write a program to reverse a given number

#include<stdio.h>
#include<conio.h>

int main(){
    int n,new=0,x,y;
    printf("Enter the number to :-");
    scanf("%d",&n);
    while(n!=0){
    x=n%10;
    new=10*new+x;
    n=n/10;
    }
    printf("The number in reverse order %d",new);
}