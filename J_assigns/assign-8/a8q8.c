#include <stdio.h>

int main(){
	int arr[10],i,sum;
	int *parr = arr;
	printf("Enter the Array Items = ");
	for (i = 0; i < 10; i++){
		scanf("%d", parr + i);
	}
	for (i = 0; i < 10; i++){
		sum = sum + *(parr + i);
	}
	printf("\nThe Sum of Array Items = %d\n", sum);
}