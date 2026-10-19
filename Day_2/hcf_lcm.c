#include<stdio.h>
int main(){
    int n, m;
    printf("Enter two numbers:");
    scanf("%d%d",&n,&m);
    int hcf=1;
    for(int i=1;i<=n && i<=m;i++){
        if(n%i==0 && m%i==0){
            hcf=i;
        }
    }
    printf("The HCF of %d and %d is %d\n",n,m,hcf);
    int lcm=(n*m)/hcf;
    printf("lcm: %d",lcm);
}