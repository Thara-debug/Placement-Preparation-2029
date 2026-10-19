
#include <stdio.h>

int main()
{
    int n, original, r, count = 0, sum = 0, power;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        r = temp % 10;
        power = 1;

        for(int i = 1; i <= count; i++)
        {
            power = power * r;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}
