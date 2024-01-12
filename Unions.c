#include <stdio.h>
#include <stdlib.h>

union unionS
{
 char name[40];
 int age;
 float weight;
}uStudent;

int main()
{
   printf("Enter your name:\n");
   scanf("%s",&uStudent.name);

   printf("Enter your age:\n");
   scanf("%d",&uStudent.age);

   printf("Enter your weight:\n");
   scanf("%.2lf",&uStudent.weight);

   printf("Your name is:%s\n",uStudent.name);
   printf("Your age is:%d\n",uStudent.age);
   printf("Your weight  is:%.2lf\n",uStudent.weight);
    return 0;
}
