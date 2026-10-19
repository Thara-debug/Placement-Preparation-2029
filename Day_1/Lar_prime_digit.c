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