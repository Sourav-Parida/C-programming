#include<stdio.h>

void main(){
    int arr[10],i,n,y;
    for(i=0;i<10;i++){
    printf("Enter the %d number :-",i+1);
    scanf("%d",&arr[i]);
    }
    printf("\nArray before swap:");
    for(i=0;i<10;i++){
        printf("%d,",arr[i]);
    }
    printf("\nEnter a integer: ");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(arr[i]==n){
            printf("Index number of the number is: %d",i);
            y=1;
        }
    }
    if(y!=1){
    printf("Number not found");
    }
}