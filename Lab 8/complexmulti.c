#include<stdio.h>

struct comp
{
   double real;
   double img;
};

struct comp comp_mul(struct comp a,struct comp b)
{
   struct comp ans;
   ans.real=a.real*b.real-a.img*b.img;
   ans.img=a.real*b.img+a.img*b.real;
   return ans;
}


void printcomp(struct comp a)
{
    printf("%0.1lf+%0.1lfi",a.real,a.img);
}

int main()
{
    struct comp c1;
    struct comp c2;
    scanf("%lf %lf",&c1.real,&c1.img);
    scanf("%lf %lf",&c2.real,&c2.img);
    printcomp(comp_mul(c1,c2));
    return 0;
}

