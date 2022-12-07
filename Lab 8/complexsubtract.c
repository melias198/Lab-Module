#include<stdio.h>

struct comp
{
   double real;
   double img;
};

struct comp comp_sub(struct comp a,struct comp b)
{
   struct comp ans;
   ans.real=a.real-b.real;
   ans.img=a.img-b.img;
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
    printcomp(comp_sub(c1,c2));
    return 0;
}

