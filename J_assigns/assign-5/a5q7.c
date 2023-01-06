#include<stdio.h>

void main(){
    int arr[10],i,sum_even=0,mul_even=1,sum_odd=0,mul_odd=1;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]%2==0){               //even number
        sum_even =sum_even+ arr[i];
        mul_even = mul_even * arr[i];
        }
        else{                            //odd number
            sum_odd =sum_odd+ arr[i];
            mul_odd = mul_odd * arr[i];
        }
    }
    printf("\nSum of even the array is : %d",sum_even);
    printf("\nproducts of even elements of array is: %d",mul_even);
    printf("\nSum of odd the array is : %d",sum_odd);
    printf("\nproducts of odd elements of array is: %d",mul_odd);
}