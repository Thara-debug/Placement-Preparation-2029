
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
    printf("%d\n",len);
    printf("%s\n",c);

    for(int i=0;i<len;i++){
        char ch=tolower(c[i]);
        printf("%c\n",ch);
    }
    for(int i=0;i<len;i++){
        char ch=toupper(c[i]);
        printf("%c\n",ch);
    }
    return 0;
}
