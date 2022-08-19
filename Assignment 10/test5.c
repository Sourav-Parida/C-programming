//5. Write a program to print the first N even natural numbers in reverse order.

#include<stdio.h>
#include<conio.h>

int main(){
    int i;
    printf("Enter how many first even natural numbers in reverse order times to print:-");
    scanf("%d",&i);
    while (i>0){
        printf("%d , ",2*i);
        i=i-1;
    }
getch();
}