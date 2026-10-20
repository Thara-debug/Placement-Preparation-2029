#include<stdio.h>
int main(){
    int n;
    int max=-1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0){
        int r=n%10;
        if(r==2|| r==3||r==5||r==7){
            if(r>max){
                max=r;
            }
        }
        n=n/10;
    }
    if(max!=-1){
        printf("The largest prime digit is %d",max);
    }
    else{
        printf("No prime digit found");
    }
}

/*
WITH ARRAYS

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    int digit=0;
    
    int a[50];
   
     int j=0;
    while(n>0){
         int count=0;
        int r=n%10;
        digit++;
        for(int i=1;i<=r;i++){
            if(r%i==0){
                count++;
            }
        }
        
        if(count==2){
            a[j]=r;
            j++;
        }
        n=n/10;
    }
    for(int i=0;i<j;i++){
        printf("%d\n",a[i]);
    }

    int lar=a[0];
    for(int i=1;i<j;i++){
        if(a[i]>lar){
            lar=a[i];
        }
    }
    printf("Largest prime number:%d ",lar);
    
    
    return 0;
}
*/