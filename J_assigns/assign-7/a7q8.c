#include<stdio.h>
#include<string.h>

int PALINDROME();

int PALINDROME(){
    char str[1000],rev[1000];
    int i,y=0;
    printf("Enter the line of string:");
    scanf("%[^\n]s",str);
    strcpy(rev,str);
    strrev(rev);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=rev[i]){
            y=1;
        }   
    }
    return y;
}
void main(){
    int y;
    y=PALINDROME();
    if(y==1){
        printf("String is not a palindrome");
    }
    else{
        printf("String is a palindrome");
    }
}