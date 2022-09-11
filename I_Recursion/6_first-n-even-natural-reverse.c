// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
#include<conio.h>
void print_even_N(int);

int main(){
    int n;
    printf("Recursive function to print first N even natural numbers in reverse order\n\n");
    printf("How many number to print:---");
    scanf("%d",&n);
    print_even_N(n);

}

void print_even_N(int n){
    if(n>0){
        printf("%d ",(n-1)*2);
        print_even_N(n-1);
    }
    
}