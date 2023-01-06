#include<stdio.h>

void main(){
    int arr[10],i;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    printf("\nArray before swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\nArray after swap:");
    for(i=9;i>=0;i--){
        printf("%d,",arr[i]);
    }
    


}