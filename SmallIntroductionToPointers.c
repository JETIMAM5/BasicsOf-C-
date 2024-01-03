#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 7;
    int* ptr=&x; //What we call a pointer does not have a data type.
    //The type we use when defining the pointer variable depends on which variable we define as the pointer,
    // here the int in front of the pointer is the data type of x.
    printf("x:%d\n",x);
    printf("x:%d\n",*ptr);
    printf("Memory Address of x :%x\n",&x);
    printf("Memory Address of x :%x\n",ptr);
    printf("Memory Address of ptr :%x\n",&ptr);
    return 0;
}
