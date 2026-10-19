
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int rep;
    int found=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                rep=arr[i];
                found=1;
                break;
            }
        }
        if(found==1){
            break;
        }
    }

    if(found==1){
        printf("First repeating element:%d",rep);
    }
    else{
        printf("No repeating element found");
    }
}
