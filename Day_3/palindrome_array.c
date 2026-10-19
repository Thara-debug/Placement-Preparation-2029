
#include <stdio.h>

int main() {
    int n;
    printf("Enter a sizeof array:\n");
    scanf("%d",&n);

    int a[n];
    

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int i=0;
    int j=n-1;
    int flag=0;

    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf(" not Palindrome");
    }
    else{
        printf("Palindrome");
    }
    return 0;
}
