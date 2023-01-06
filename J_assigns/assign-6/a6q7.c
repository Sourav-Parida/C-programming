#include<stdio.h>
#include<ctype.h>

void main(){
    char str[1000];
    int i,upper=0,lower=0;
    printf("Enter the line of string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n';i++){
        str[i]=toupper(str[i]);
    }
    printf("%s",str);
}