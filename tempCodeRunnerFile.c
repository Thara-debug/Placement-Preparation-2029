#include<stdio.h>
int fib(int n) {
    if(n==0 ||n==1){
        return n;
    }
    int a= fib(n-1);
    int b=fib(n-2);
    return a+b;
}

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("%d ", fib(i));
    }

    return 0;
}