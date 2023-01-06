#include<stdio.h>

int largest(int [],int );
int smallest(int[],int);

int largest(int arr[],int n){
    int great=0,i;
    for(i=0;i<n;i++){
        if(arr[i]>great)
        great=arr[i];
    }
    return great;
}
int smallest(int arr[],int n){
    int small=arr[0],i;
    for(i=0;i<n;i++){
        if(arr[i]<small)
        small=arr[i];
    }
    return small;
}
void main(){
    int ar[10],i=0;
    while(i<10){
        printf("Enter %d number :",i+1);
        scanf("%d",&ar[i]);
        i++;
    }
    int n = sizeof(ar) / sizeof(ar[0]);
    printf("Largest is: %d", largest(ar, n));
    printf("\nsmallest is: %d", smallest(ar, n));
}