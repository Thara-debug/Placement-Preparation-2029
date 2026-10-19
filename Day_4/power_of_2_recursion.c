#include <stdio.h>

void powertwo(int n){
    if(n==1){
        printf("Its a power of two");
        return;
    }
    if(n==0){
        printf("its not power of two");
        return;
    }
    if(n%2!=0){
        printf("Its  not a power of two");
        return;
    }
    powertwo(n/2);
        
    
}

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    powertwo(n);
    return 0;
}1