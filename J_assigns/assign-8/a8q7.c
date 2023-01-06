#include <stdio.h>

int main()
{
	int arr[10],i,sum;
	int *parr = arr;
	printf("Enter the Array Items = ");
	for (i = 0; i < 10; i++){
		scanf("%d", parr + i);
	}
	for (i = 0; i < 10; i++){
		sum = sum + *(parr + i);
	}
	float avg = (float)sum / 10;
	printf("\nThe Average of Array Items = %.2f\n", avg);
}