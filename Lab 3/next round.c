#include <stdio.h>

int main()
{
    int n, k, i;
    int arra[55];
    int sum = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arra[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (arra[i] >= arra[k] && arra[i] > 0)
        {
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}