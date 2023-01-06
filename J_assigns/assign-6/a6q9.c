#include<stdio.h>

void main(){
    char str[1000],str2[1000],str3[2000];
    int i,j=0;
    printf("Enter the line of string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the 2nd line of string:");
    fgets(str2,sizeof(str2),stdin);
    for(i=0;str[i]!='\n';i++){
        str3[i]=str[i];
        j++;
    }
    for(i=0;str2[i]!='\n';i++){
        str3[j]=str2[i];
        j++;
    }
    printf("\nNew string is :%s",str3);

}