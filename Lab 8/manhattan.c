#include<stdio.h>

struct point
{
    int x;
    int y;
};

int manhattan(struct point a,struct point b)
{
    int res=abs(a.x-b.x) + abs(a.y-b.y);
    return res;
}

int main()
{

    struct point p1;
    struct point p2;
    scanf("(%d,%d)\n",&p1.x,&p1.y);
    scanf("(%d,%d)",&p2.x,&p2.y);
    int ans=manhattan(p1,p2);
    printf("The manhattan distance = %d\n",ans);
    return 0;
}

