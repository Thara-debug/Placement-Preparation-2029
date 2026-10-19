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

    int max=INT_MIN;
    int sec_lar=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sec_lar=max;
            max=arr[i];
        }
        else if(arr[i]>sec_lar && arr[i]!=max){
            sec_lar=arr[i];
        }
    }
    printf("Maximum element is: %d\n",max);
    printf("Second largest element is: %d",sec_lar);
}