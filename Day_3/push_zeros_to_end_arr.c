
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
    for(int j=0;j<n;j++){
        if(a[j]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
