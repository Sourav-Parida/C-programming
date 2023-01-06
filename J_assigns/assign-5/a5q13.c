#include <stdio.h>

void main()
{
int arr[3][3],i,j,y; 
    /* Stored values into the array*/
    printf("Input elements in the matrix :\n");
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
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(arr[i][j]!=arr[j][i]){
            y=0;
        }
    }
}
if(y==0){
    printf("\nEntered matrix is not symmetric");
}
else{
    printf("\nEntered matrix is symmetric");
}
}