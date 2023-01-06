#include <stdio.h>

void sumdiagonal(int[3][3]);

void sumdiagonal(int arr[3][3]){
    int sum=0,i=0,j=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum= sum + arr[i][j];
            }
        }
    }
    printf("\nsum of diagonal:%d",sum);
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
sumdiagonal(ar);
}



