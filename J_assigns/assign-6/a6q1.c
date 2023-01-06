#include<stdio.h>

void main(){
    char str[10];
    int i,vow=0,con=0;
    printf("Enter the line of string:");
    fgets(str,11,stdin);
    for(i=0;i<10 && str[i]!='\n';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vow=vow+1;
        }
        else{
            con=con+1;
        }
    }
    printf("Number of vowels= %d",vow);
    printf("\nNumber of consonants= %d",con);
} 