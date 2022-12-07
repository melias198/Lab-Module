#include<stdio.h>
int sum_of_digit(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int is_prime(int sum)
{
    for(int i=2;i<sum;i++)
    {
        if(sum%i==0)
        return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(is_prime(sum_of_digit(n))==1)
    {
        printf("Beutiful Number");
    }
    else
    printf("Ugly Number");

    return 0;
}

