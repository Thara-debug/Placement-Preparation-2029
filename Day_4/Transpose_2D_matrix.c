
#include <stdio.h>

int main() {
    int m,n;

    printf("Enter the size of matrix:");
    scanf("%d %d",&m,&n);

    int a[m][n];

    printf("Enter the elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Original matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
