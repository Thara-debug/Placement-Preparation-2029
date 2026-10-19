#include<stdio.h>

void print_value(int n){
    if(n==0){
        return;
    }
    print_value(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    
    print_value(n);
    
    return 0;
}