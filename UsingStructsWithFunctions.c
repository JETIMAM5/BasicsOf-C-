#include <stdio.h>
#include <stdlib.h>
struct Info
{
 char* name;
 int age;
};
void showMe(struct Info x);
int main()
{
    struct Info x;
    x.name="Ali";
    x.age=33;

    showMe(x);

}
 void showMe(struct Info x)
 {
  printf("Name=%s\n",x.name);
  printf("Age=%d",x.age);
 }
