#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Memory addresses are the expressions which consisting of hexadecimal numbers.
   int x = 7;
   float y = 3.14;
   double z = 4.65165;
   char f = 'F';

   printf("Value of x:%d\n",x);
   printf("Value of y:%f\n",y);
   printf("Value of z:%f\n",z);
   printf("Value of f:%c\n\n",f);

   //The point that should not be forgotten here is this:
   //If you want to obtain the  memory address of a variable in memory (regardless of its type), it must be called with %x and &.
   //Apart from that , you cannot assign the memory address of any variable .
   printf("Memory Addres of x :%x\n",&x);
   printf("Memory Addres of y :%x\n",&y);
   printf("Memory Addres of z :%x\n",&z);
   printf("Memory Addres of f :%x\n",&f);
   return 0;
}
