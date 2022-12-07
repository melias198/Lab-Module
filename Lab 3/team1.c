#include<stdio.h>

int main()
{
    int n,i,j,a,count=0,solve=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     for(j=1;j<=3;j++)
     {
        scanf("%d",&a);
        count+=a;
     }
     if(count>=2)
     solve++;
    }
    printf("%d",solve);
    return 0;
}