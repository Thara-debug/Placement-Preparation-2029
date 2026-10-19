#include <stdio.h>

void powertwo(int n){
    if(n==1){
        printf("Its a power of three");
        return;
    }
    if(n==0){
        printf("its not power of three");
        return;
    }
    if(n%3!=0){
        printf("Its  not a power of three");
        return;
    }
    powertwo(n/3);
        
    
}

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    powertwo(n);
    return 0;
}