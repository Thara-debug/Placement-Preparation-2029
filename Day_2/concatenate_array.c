
#include <stdio.h>

int main() {
    int n;
    printf("Enter a sizeof array:\n");
    scanf("%d",&n);

    int a[n];
    

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    
    int m=2*n;
    int con[m];
    
    for(int i=0;i<n;i++){
        con[i]=a[i];
        con[i+n]=a[i];
    }
    for(int i=0;i<m;i++){
        printf("%d ",con[i]);
    }
    
    return 0;
}
