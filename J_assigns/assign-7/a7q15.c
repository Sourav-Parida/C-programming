#include <stdio.h>

int  MATRIXSUM(int arr[3][3],int arr2[3][3]){
    int arr3[3][3],i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=arr[i][j] + arr2[i][j];
            }
        }
    printf("\nThe resultant matrix is :");
        for(i=0;i<3;i++){
            printf("\n");
            for(j=0;j<3;j++){
                printf("%d\t",arr3[i][j]);
            }
        }
}

void main(){
int ar[3][3],i,j; 
    /* Stored values into the array*/
    printf("Input elements in the matrix :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&ar[i][j]);
    }
}
printf("\nThe matrix is :");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",ar[i][j]);
    }
}

int ar2[3][3]; 
    /* Stored values into the array*/
    printf("Input elements in the 2nd matrix :\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
	    printf("element - [%d],[%d] : ",i,j);
	    scanf("%d",&ar2[i][j]);
    }
}
printf("\nThe 2nd matrix is :");
for(i=0;i<3;i++){
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\t",ar2[i][j]);
    }
}
MATRIXSUM(ar,ar2);
}
