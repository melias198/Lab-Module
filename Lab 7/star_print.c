#include<stdio.h>

void print_star(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("*");
    }
   printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        print_star(i);
    }

    return 0;
}

