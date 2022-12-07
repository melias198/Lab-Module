#include<stdio.h>

struct student
{
  int roll;
  char name[50];
  double marks;
};

void printstudent(int n,struct student s)
{
        printf("Information of student %d\n",n);
        printf("%d\n",s.roll);
        printf("%s\n",s.name);
        printf("%lf\n",s.marks);
}

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

     for(int i=0;i<n;i++)
    {
       printstudent(i,s[i]);
    }
    return 0;
}

