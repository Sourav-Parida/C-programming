#include <stdio.h>
void main(){
    char str[100];
    char *p;
    int  vCount=0,cCount=0,cb;
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    p=str;
    while(*p!='\n'){
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else if (*p !=' ')
            cCount++;
        p++;
    }
    printf("Number of Vowels : %d\n",vCount);
    printf("Number of Consonants : %d",cCount);
}