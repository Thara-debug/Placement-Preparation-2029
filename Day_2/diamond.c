#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i = n-1; i >= 1; i--)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<=i+i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-2;i>=0;i--){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<=i+i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/