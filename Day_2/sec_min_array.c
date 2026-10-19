#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=INT_MAX;
    int sec_min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            sec_min=min;
            min=arr[i];
        }
        else if(arr[i]<sec_min && arr[i]!=min){
            sec_min=arr[i];
        }
    }
    printf("Minimum element is: %d",min);
    printf("\nSecond minimum element is: %d",sec_min);
}