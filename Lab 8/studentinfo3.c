#include<stdio.h>

struct student
{
  int roll;
  char name[50];
  double marks;
};


int main()
{
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i].roll);
        scanf("%s",&s[i].name);
        scanf("%lf",&s[i].marks);
    }
     double sum=0;
     for(int i=0;i<n;i++)
    {
        if(s[i].roll%2==0)
        sum+=s[i].marks;
    }
    printf("%lf",sum);
    return 0;
}

