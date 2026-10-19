
#include <stdio.h>

int main() {
    int n;
    printf("Enter a sizeof array:\n");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int i=0;

    for(int j=1;j<n;j++){
        if(a[j]!=a[i]){
            i++;
            a[i]=a[j];
        }
    }

    for(int j=0;j<=i;j++){
        printf("%d ",a[j]);
    }

    printf("\n");
    printf("%d\n",i+1);

    return 0;
}
