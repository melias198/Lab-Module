#include<stdio.h>

int main()
{
    int n,i,moves=0;
    int arra[200005];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arra[i]<arra[i-1])
        {
            moves+=arra[i-1]-arra[i];
            arra[i]=arra[i-1];
        }
    }
    printf("%d",moves);

    return 0;
}