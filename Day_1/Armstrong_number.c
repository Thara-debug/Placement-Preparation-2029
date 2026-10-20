
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

/*
#include <stdio.h>

int main() {
    int n;
    int r;
    printf("Enter a number:\n");
    scanf("%d",&n);

    int count=0;
    while(n>0){
        r=n%10;
        count++;
        n=n/10;
    }

    int sum=0;
    
    while(n>0){
        int fact=1;
        r=n%10;
        for(int i=0;i<count;i++){
            fact=fact*r;
        }
        for(int i=0;i<1;i++){
            sum=sum+fact;
        }
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
*/