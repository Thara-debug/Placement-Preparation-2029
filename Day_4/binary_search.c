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
    int low=0;
    int high=n-1;

    while(low<=high){
       int mid=(low+high)/2;
            if(a[mid]==search){
                index=mid;
                break;
            }
        else if(a[mid]<search){
            low=mid+1;
        }
        else{
            high=mid-1;
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