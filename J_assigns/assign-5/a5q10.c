#include <stdio.h>

void main()
{
int arr[3][3],i,j; 
    /* Stored values into the array*/
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&arr[i][j]);
    }
}
printf("\nThe matrix is : \n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
    }
}
printf("\nTranspose of the matrix is: \n");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",arr[j][i]);
    }
}
}