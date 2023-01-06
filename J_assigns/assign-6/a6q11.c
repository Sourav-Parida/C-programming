#include<stdio.h>

void main(){
    char str[1000];
    int i,j,c;
    printf("Enter the line of string:");
    scanf("%[^\n]s",str);
    printf("Duplicate cherecters are: ");
    for(i=0;str[i]!='\0';i++){
        c=1;
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
            c++;
            str[j]='0';
            }
        }
        if(c>1&&str[i]!='0'){
            printf("%c, ",str[i]);
        }
    }
}