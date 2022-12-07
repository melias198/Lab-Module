#include<stdio.h>

struct comp
{
   double real;
   double img;
};

void printcomp(struct comp a)
{
    printf("%0.1lf+%0.1lfi",a.real,a.img);
}

int main()
{
    struct comp c;
    scanf("%lf",&c.real);
    scanf("%lf",&c.img);
    printcomp(c);
    return 0;
}

