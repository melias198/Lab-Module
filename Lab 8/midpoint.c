#include <stdio.h>

struct point
{
    float x;
    float y;
};

struct point midpoint(struct point a, struct point b)
{
    struct point m;
    m.x = (a.x + b.x) / 2;
    m.y = (a.y + b.y) / 2;
    return m;
}

int main()
{
    struct point p1;
    struct point p2;
    scanf("(%f,%f)\n", &p1.x, &p1.y);
    scanf("(%f,%f)", &p2.x, &p2.y);

    struct point p3;
    p3 = midpoint(p1, p2);
    printf("Midpoint is = (%.2f,%.2f)\n", p3.x, p3.y);
    return 0;
}
