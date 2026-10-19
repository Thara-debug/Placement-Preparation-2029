#include <stdio.h>
int main() {
    int n;
    printf("Enter a sizeof array:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

   
    for(int i=0;i<n;i++){
        int flag=0;
        int count=0;
        for(int k=0;k<i;k++){
            if(a[i]==a[k]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            continue;
        }
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        printf("%d count %d\n",a[i],count);
    }
    return 0;
}