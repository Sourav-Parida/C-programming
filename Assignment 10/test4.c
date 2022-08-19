//4. Write a program to print the first N even natural numbers.

#include<stdio.h>
#include<conio.h>

int main(){
    int i=1;
    int n;
    printf("Enter how many first even natural numbers to print:-");
    scanf("%d",&n);
    while (i<=n){
        printf("%d , ",2*i);
        i=i+1;
    }
getch();
}