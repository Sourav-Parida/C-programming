#include <stdio.h>
int product(int [],int );

int product(int ar[],int n){
    int mul = 1;
    for (int i = 0; i < n; i++)
        mul = (mul * ar[i]);
    return mul;
}
void main(){
    int ar[10],i=0;
    while(i<10){
        printf("Enter %d number :",i+1);
        scanf("%d",&ar[i]);
        i++;
    }
    int n = sizeof(ar) / sizeof(ar[0]);
    printf("product of elements: %d", product(ar, n));
}