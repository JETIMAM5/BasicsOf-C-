#include <stdio.h>
#include <stdlib.h>

 void MyMessage()
 {
 printf("This is a function that has no return value");
 }
 void nameList(char name[],int age)
 {
     //This is a function that has char and integer type parameters
 printf("%s is %d years old.\n",name,age);
 }
int main()
{
   nameList("Bart",15);
   nameList("Juliet",24);
   nameList("Hank",29);
   nameList("Emilie",14);

    return 0;
}
