#include <stdio.h>

int  SECLARGEST(int[3][3]);

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
SECLARGEST(ar);
}

int  SECLARGEST(int arr[3][3]){
    int largest=0,large=0,i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]>largest){
                largest=arr[i][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr[i][j]>large && arr[i][j]<largest){
                large=arr[i][j];
            }
        }
    }
    printf("\n2nd largest number is:%d",large);
}



