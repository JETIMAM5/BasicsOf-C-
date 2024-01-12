#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char* name;
int age;
float weight;
}Student;

typedef long long int lli;
typedef int i;
typedef char name[30];

int main()
{
    /*
    name n1= "Hayati";
    lli x;
    i z,y;
    z=7;
    y=19;
    printf("%d\n",(z+y));
    printf("%s\n",n1);
    */

     Student s1={"Ayse",28,64.40};
     Student s2={"Ahmet",29,78.30};

    printf("Your name :%s\n",s1.name);
    printf("Your age  :%d\n",s1.age);
    printf("Your weight :%.2f\n\n",s1.weight);

    printf("Your name :%s\n",s2.name);
    printf("Your age  :%d\n",s2.age);
    printf("Your weight :%.2f\n\n",s2.weight);
    return 0;
}
