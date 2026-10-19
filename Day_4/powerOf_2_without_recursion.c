int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    while(n%2==0){
        n=n/2;
    }
    if(n==1){
        printf("Its a power of two");
    }else{
        printf("Its not a power of two");
    }
    return 0;
}