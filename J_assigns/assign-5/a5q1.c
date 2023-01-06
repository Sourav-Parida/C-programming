#include<stdio.h>

void main(){
    int arr[10],i=0,n=0,sum=0,mul=1;
    while(i<10){
        printf("Enter the %d number :-",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    while(n<10){
    	sum =sum + arr[n];
    	n++;
    }
    printf("\nSum of the array is : %d",sum);
    for(i = 0; i < 10; i++){
    	mul = mul * arr[i];
    	}
    printf("\nproducts of elements of array is: %d",mul);
} 