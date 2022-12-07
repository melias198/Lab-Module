#include <stdio.h>

int main()
{
    int arra[105];
    int n, i;
    int oc = 0, ec = 0;
    int ans;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arra[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if (arra[i] % 2 == 0)
            ec++;
        else
            oc++;
    }
    if (ec == 1)
    {
        for (i = 1; i <= n; i++)
        {
            if (arra[i] % 2 == 0)
                ans = i;
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (arra[i] % 2 != 0)
                ans = i;
        }
    }
    printf("%d", ans);

    return 0;
}