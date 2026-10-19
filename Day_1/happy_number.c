#include <stdio.h>

void happy_number(int n){
    while(n!=1 && n!=4){
        
        int s=0;
        while(n>0){
            int r=n%10;
            s=s+r*r;
            n=n/10;
        }
        n=s;
    }
    if(n==1){
        printf("It is a happy number");
    }
    else{
        printf("It is not a happy number");
    }
}

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    happy_number(n);
}