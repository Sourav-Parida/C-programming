// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter no of cube of first natural no to be added:-");
    scanf("%d",&n);
    int sum=0;
    int cube;
    while(i<=n){
        cube=i*i*i;           // stores cubes of no.
        sum=sum+cube;
        i=i+1;
    }
    printf("%d",sum);
getch();
}