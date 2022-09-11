// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
#include<conio.h>
void print_odd_N(int);

int main(){
    int n;
    printf("Recursive function to print first N odd natural numbers\n\n");
    printf("How many number to print:---");
    scanf("%d",&n);
    print_odd_N(n);

}

void print_odd_N(int n){
    if(n>0){
        print_odd_N(n-1);
        printf("%d ",(n-1)*2+1);
    }
    
}