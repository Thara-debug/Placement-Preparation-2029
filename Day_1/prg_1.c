#include<stdio.h>
int  main(){

    int a,b;
    float c;
    printf("Enter the loaded weight in kg (whole number),empty tractor weight in kg (whole number),and rate per quintal (decimal).\n");
    scanf("%d %d %f",&a,&b,&c);
    
    int net_weight=a-b;
    float quintals=(float)net_weight/100.0;
    float amt_pay=quintals*c;
    printf("Loaded weight: %d kg\n", a);
    printf("Empty tractor weight: %d kg\n", b);
    printf("Rate per quintal: %.2f\n", c);
    printf("Net weight: %d kg\n", net_weight);
    printf("Number of Quintals: %.2f\n", quintals);
    printf("Amount to be paid: %.2f\n", amt_pay);

}