#include<stdio.h>

void print_value(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    print_value(n-1);
   
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    
    print_value(n);
    
    return 0;
}