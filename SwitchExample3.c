#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

   printf("Enter a number:\n");
   scanf("%d",&number);

   switch(number%2)
   {
   case 0:printf("%d is an even number\n");break;
   case 1:printf("%d is an odd number\n");break;

   }
    return 0;
}
