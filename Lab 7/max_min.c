#include<stdio.h>
void find_max_min(int n,int arra[],int* max,int* min)
{
    *max=arra[0];
    *min=arra[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(arra[i]> *max)
        {
            *max=arra[i];
        }
        if(arra[i]< *min)
        {
            *min=arra[i];
        }
    }

}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int max,min;
    find_max_min(n,arra,&max,&min);
    printf("maximum --> %d minimum --> %d",max,min);

    return 0;
}

