#include<stdio.h>

 int mul=1;
int factorial(int n){
    for(int i=1;i<=n;i++){
    mul=mul*i;
    }
   return mul;
}
int main(){
   
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    int x=factorial(n);
    printf("%d",x);
}