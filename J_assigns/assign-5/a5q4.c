#include<stdio.h>

void main(){
    int arr[10],i,greatest=0,great=0;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>greatest)
        greatest=arr[i];
    }
    for(i=0;i<10;i++){
        if(arr[i]>great && arr[i]<greatest)
        great=arr[i];
    }
    printf("\n 2nd greatest no is %d",great);


}