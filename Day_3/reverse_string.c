#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char c[100];
    printf("Enter a string:\n");
    fgets(c,100,stdin);

    int len=strlen(c);

    if(c[len-1]=='\n'){
        len--;
    }

    for(int i=len-1;i>=0;i--){
        char ch=tolower(c[i]);
        printf("%c",ch);
    }
    
}
