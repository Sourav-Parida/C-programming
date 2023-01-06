#include <stdio.h>

int main()
{
    int arr[10], *max, i;
    printf("Enter 10 integers:\n");
    for ( i = 0 ; i < 10 ; i++ )
        scanf("%d", &arr[i]);
    max=arr;
    *max = *arr;
    for (i = 1; i < 10; i++){
    if (*(arr+i) > *max){
       *max = *(arr+i);
    }
    }
    printf("Maximum element is %d.\n", *max);
}