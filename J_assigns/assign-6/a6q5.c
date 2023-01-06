#include <stdio.h>
int main(){
    char str[1000], rev[1000];
    int i, j, count = 0;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    while (str[count]!='\n'){
    count++;
    }
    j = count - 1;
    for (i = 0; i < count; i++){
    rev[i] = str[j];
    j--;
    }
    printf("String After Reverse:%s",rev);
}

