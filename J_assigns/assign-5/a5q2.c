#include<stdio.h>

void main(){
    int arr[10],i,greatest=0,smallest;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>greatest)
        greatest=arr[i];
        if(arr[i]<smallest)
        smallest=arr[i];
    }
    printf("\ngreatest number is %d",greatest);
    printf("\nsmallest number is %d",smallest);


}