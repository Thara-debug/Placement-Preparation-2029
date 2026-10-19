#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int flag=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
              
        }
        if(count==1){
            printf("First Non-repeating element:%d",arr[i]);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("No  non-repeating elements");
    }
    
    
    
}