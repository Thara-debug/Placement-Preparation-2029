#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>9){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum=sum+r;
            n=n/10;
        }
        n=sum;
    }
    if(n==1){
        printf("It is a magic number");
    }
    else{
        printf("Not magic");
    }
}
