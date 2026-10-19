// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int n;
    int sum=0;
    int r,a,d;
    
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=10){
        int sum=0;
        while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
        }
        n=sum;
    }
    printf("%d",n);
}