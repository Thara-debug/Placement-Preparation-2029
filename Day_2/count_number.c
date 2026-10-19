// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int n;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);
   
   
        while(n!=0){
            n=n/10;
            count++;
        }
    printf("%d",count);
}