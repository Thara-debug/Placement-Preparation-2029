#include<stdio.h>

int a=0,b=1,c;
void fibo(int n){
    for(int i=0;i<n;i++){
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
}

int main(){
    int n;
    
    printf("Enter the number:\n");
    scanf("%d",&n);
    
    fibo(n);
}