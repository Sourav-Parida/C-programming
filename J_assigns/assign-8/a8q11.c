#include <stdio.h>

int main()
{
    int arr[3][3],*p,i,j;
    printf("Enter Input for matrix:\n");
    for ( i=0;i<3;i++ ){
        for (j=0;j<3;j++){
            printf("a[%d],[%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    p=arr[];
    int lg = *p;
    for(i=0;i< 3;i++){
        for(j=0;j<3;j++){
            if(*(p+10*i+j)>lg){
                lg = *(p+10*i+j);
            }
        }
    }
    printf("Maximum element is %d.\n",lg);
}