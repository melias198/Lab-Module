#include<stdio.h>

struct point
{
    float x;
    float y;
};

struct triangle
{
  struct point A;
  struct point B;
  struct point C;
};

struct point centroid(struct triangle t)
{
  struct point ans;
  ans.x=(t.A.x+t.B.x+t.C.x)/3;
  ans.y=(t.A.y+t.B.y+t.C.y)/3;
  return ans;
}

int main()
{
    struct point p1;
    struct point p2;
    struct point p3;
    scanf("(%f,%f)\n", &p1.x, &p1.y);
    scanf("(%f,%f)\n", &p2.x, &p2.y);
    scanf("(%f,%f)", &p3.x, &p3.y);

    struct triangle t= {p1,p2,p3};
    struct point p4=centroid(t);
    printf("The Centoid of a Triangle = (%.2f,%.2f)",p4.x,p4.y);
    return 0;
}

