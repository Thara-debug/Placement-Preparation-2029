#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main(){
    char ch[100];
    printf("Enter a string:\n");
    fgets(ch,100,stdin);

    int len=strlen(ch);

    if(ch[len-1]=='\n'){
        len--;
        ch[len]='\0';
    }

    for(int i=len-1;i>=0;i--){
        ch[i]=tolower(ch[i]);
        printf("%c",ch);
    }
    printf("\n");

    int i=0;
    int j=len-1;
    while(i<j){
        if(ch[i]!=ch[j]){
            printf("not  a palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("palindrome\n");
    
}
