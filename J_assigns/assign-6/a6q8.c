#include<stdio.h>

void main(){
    char str[100],str2[100];
    int i,same=0;
    printf("Enter the line of string 1:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the line of string 2:");
    fgets(str2,sizeof(str2),stdin);
    for(i=0;str[i]!='\n'||str2[i]!='\n';i++){
        if(str2[i]!=str[i]){
            same=1;
        }
    }
    if(same==1){
        printf("both strings are not same");
    }
    else{
        printf("both strings are same");
    }
}