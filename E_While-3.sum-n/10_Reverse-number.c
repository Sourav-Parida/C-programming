//10. Write a program to reverse a given number

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to reverse a given number\n\n");
    int n,new=0,x,y;
    printf("Enter the number :-");
    scanf("%d",&n);
    while(n!=0){
    x=n%10;                 //gets latest digit
    new=10*new+x;           //puts the digit in new number
    n=n/10;                 // deletes the last number
    }
    printf("The number in reverse order %d ",new);
}