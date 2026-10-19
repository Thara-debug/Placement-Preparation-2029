// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int n;
    int rev=0;
    int r;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    printf("%d",rev);
}