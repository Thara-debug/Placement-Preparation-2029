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

    int vowel=0,consonants=0,digit=0,space=0,sp=0;
    
    for(int i=0;i<len;i++){
        char ch=tolower(c[i]);
        printf("%c\n",ch);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }
        else if(ch>='a' && ch<='z'){
            consonants++;
        }
        else if(ch>='0' && ch<='9'){
            digit++;
        }
        else if(ch==' '){
            space++;
        }
        else{
            sp++;
        }
    }
    

    printf("vowels: %d\n",vowel);
    printf("consonants:%d\n",consonants);
    printf("digit:%d\n",digit);
    printf("space:%d\n",space);
    printf("sp:%d\n",sp);
    return 0;
}
