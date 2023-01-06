#include<stdio.h>

void main(){
    char str[100],str2[100];
    int i;
    printf("Enter the line of string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n';i++){
        str2[i]=str[i];
    }
    printf("Entered string is:%s",str);
    printf("Copied string is:%s",str2);
}