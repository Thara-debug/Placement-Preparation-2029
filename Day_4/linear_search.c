#include <stdio.h>

int main() {
    int n,search;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int  a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Search element:\n");
    scanf("%d",&search);
    int index=-1;
    for(int i=0;i<n;i++){
        if(a[i]==search){
            index=i;
            break;
        }
        
    }
    if(index!=-1){
            printf("element found %d",index);
        }
    else{
        printf("element not found");
    }
    
    return 0;
}