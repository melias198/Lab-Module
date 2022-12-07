#include<stdio.h>

int main()
{
    int n,i,a,b,c;
    scanf("%d",&n);
    int solve=0;
    for(i=0;i<n;i++)
    {
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c>=2)
    solve++;
    }
    printf("%d",solve);

    return 0;
}