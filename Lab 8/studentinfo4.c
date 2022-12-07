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
        printf("Roll is : %d\n",s.roll);
        printf("Name is : %s\n",s.name);
        printf("Mark is : %lf\n",s.marks);
}

int main()
{
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    { 
        printf("Enter your roll %d num std: ",i);
        scanf("%d",&s[i].roll);
        printf("Enter your name %d num std: ",i);
        fflush(stdin);
        gets(s[i].name);
        printf("Enter your marks %d num std: ",i);
        scanf("%lf",&s[i].marks);
    }

     for(int i=0;i<n;i++)
    {
       printstudent(i,s[i]);
    }
    return 0;
}

