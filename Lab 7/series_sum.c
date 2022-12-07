#include<stdio.h>

int sum_of_series(int n)
{
    if(n==1)
    return 1;
    else
    return sum_of_series(n-1)+n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum_of_series(n));
    return 0;
}

