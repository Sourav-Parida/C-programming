// 7. Write a program to count digits in a given number

#include<stdio.h>
#include<conio.h>

int main(){
    printf("Program to count digits in a given number\n\n");
    int i=0;
    int n;
    printf("Enter the number to find no of digits:-");
    scanf("%d",&n);
    while (n!=0){
        n=n/10;
        i=i+1;
    }
    printf("Number of digit in %d number is:- %d ",n,i);
    getch();
    return 0;

}