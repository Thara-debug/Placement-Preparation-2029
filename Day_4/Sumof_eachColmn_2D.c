// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {

    int n,m;
    printf("Enter a size of array:\n");
    scanf("%d %d",&n,&m);
    int a[n][m];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+a[j][i];
        }
        printf("%d ",sum);
        
    }
    
    return 0;
}