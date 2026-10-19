// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=10){
        n=n/10;
    }
    printf("%d",n);
}