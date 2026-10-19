#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=5;i>=1;i--){
        for(int k=0;k<=n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<i+i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}