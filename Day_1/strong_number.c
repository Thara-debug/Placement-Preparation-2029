#include<stdio.h>
int main(){
   
    int sum=0;
    
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int l=n%10;
        int mul=1;
        for(int i=1;i<=l;i++){
            mul=mul*i;  
        }
        sum=sum+mul;
        n=n/10;
        
    }
    if(temp==sum){
        printf("It is a strong number");
    }
    else{
        printf("Not strong");
    }
    
}