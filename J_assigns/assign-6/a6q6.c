#include<stdio.h>

void main(){
    char str[1000];
    int i,vow=0,con=0,sp=0;
    printf("Enter the line of string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\n';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vow=vow+1;
        }
        else if(str[i]==' '){
            sp++;
        }
        else{
            con=con+1;
        }
    }
    printf("\nNumber of vowels= %d",vow);
    printf("\nNumber of consonants= %d",con);
    printf("\nNumber of spaces= %d",sp);
}