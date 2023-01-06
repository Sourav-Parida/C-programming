#include<stdio.h>

void main(){
    int arr[10],i,first,last;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    first=arr[0];
    last=arr[9];
    printf("\nArray before swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    arr[0]=last;
    arr[9]=first;
    printf("\nArray after swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
}
