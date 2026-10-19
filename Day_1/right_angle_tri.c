// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int m;
    printf("Enter a number:");
    scanf("%d",&m);
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}