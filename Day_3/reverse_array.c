#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr1[n];
    int rev[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Before reverse:\n");
    printf("Array 1:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }

    
    for(int i=n-1;i>=0;i--){
        rev[n-1-i]=arr1[i];
    }
    printf("After reverrse:\n");
    for(int i=0;i<n;i++){
        printf("%d ",rev[i]);
    }
}