
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Not an Ugly Number");
        return 0;
    }

    while(n % 2 == 0)
    {
        n = n / 2;
    }

    while(n % 3 == 0)
    {
        n = n / 3;
    }

    while(n % 5 == 0)
    {
        n = n / 5;
    }

    if(n == 1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not an Ugly Number");
    }

    return 0;
}
