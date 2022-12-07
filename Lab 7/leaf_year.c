#include <stdio.h>

int leap_year(int n)
{
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0))
        return 1;
    else
        return 0;
}

int distinct_digit(int n)
{
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int ld;
    while (n > 0)
    {
        ld = n % 10;
        count[ld]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int year;
    scanf("%d", &year);
    if (leap_year(year) == 1 && distinct_digit(year) == 1)
        printf("Beautiful Year");
    else
        printf("Ugly Year");
    return 0;
}
