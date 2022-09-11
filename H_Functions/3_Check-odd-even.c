/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

#include<stdio.h>
#include<conio.h>

int e_o(int);
int no,N;
int main(){
    printf("Function to check whether a given number is even or odd."); 
    printf("Return 1 if the number is even, otherwise return 0. (TSRS)\n\n");
    printf("Enter the number:--");
    scanf("%d",&no);
    N= e_o(no);
    if(N==1)
        printf("The number is even");
    else 
        printf("The number is Odd");
    return 0;
}
int e_o(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}