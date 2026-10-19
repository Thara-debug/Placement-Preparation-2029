//here the program will run acc to number of rotations i.e for 8 no of rotations it will run 8 times. so we add k=k%n to decrease the number of rotations so the no of rotations will become 3 .i.e both are same

#include <stdio.h>

int main() {
    int n;
    printf("Enter a sizeof array:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("Enter the number of rotations:");
    scanf("%d",&k);
    k=k%n;
    for(int i=1;i<=k;i++){
        int last=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}