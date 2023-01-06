#include<stdio.h>

void main(){
    int arr[10],i,greatest=0,smallest,small,great;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>greatest){
        greatest=arr[i];
        great=i;
    }
        if(arr[i]<smallest){
        smallest=arr[i];
        small=i;
    }
    }
    printf("\nArray before swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    arr[great]=smallest;
    arr[small]=greatest;
    printf("\nArray after swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    


}