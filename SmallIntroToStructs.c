#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students
{
   char myLetter;
   char* name;
   char* lastname;
   int no;
   float score;
   char parentName[40];
};

int main()
{
    //First way to define fileds
    struct students x ;
    x.myLetter='A';
    x.name= "ALI";
    x.lastname = "VELI";
    x.no = 030122010;
    x.score =100.00;
    strcpy(x.parentName,"Ahmet");

    //Second way to define fields
    struct students x2={'B',"SIMON","YELLOW",030122011,99.99,"Ali"};


    printf("myLetter =%c\n",x.myLetter);
    printf("Name     =%s\n",x.name);
    printf("Last Name=%s\n",x.lastname);
    printf("No       =%d\n",x.no);
    printf("Score    =%.2f\n",x.score);
    printf("--------------\n");
    printf("myLetter =%c\n",x2.myLetter);
    printf("Name     =%s\n",x2.name);
    printf("Last Name=%s\n",x2.lastname);
    printf("No       =%d\n",x2.no);
    printf("Score    =%.2f\n",x2.score);
    return 0;
}
