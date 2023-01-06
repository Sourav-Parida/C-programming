#include <stdio.h>

void main()
{
int arr[3][3],i,j,sum=0,mul=1; 
    /* Stored values into the array*/
    printf("Input elements in the matrix :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&arr[i][j]);
    }
}
printf("\nThe matrix is :");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",arr[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(i+j==2){
            sum=sum+arr[i][j];
            mul=mul*arr[i][j];
        }
    }
}
printf("\nSum of secondary diagonal elements:%d",sum);
printf("\nproduct of secondary diagonal elements:%d",mul);
}