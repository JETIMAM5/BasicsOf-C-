#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int x = 7;
    int* ptr=&x;
    printf("Memory Address of x:%x\n",ptr);//Memory Address of x.
    printf("Memory Address of ptr:%x\n",&ptr);//Memory Address of ptr.
    printf("Exact value of x:%d\n",*ptr);//Exact value of x --in here ,"*ptr" refers to value of x.
    //What happens to x when we change the value of "*ptr"?
    *ptr = 18;
    printf("% New value of x:d\n",x);
    //We can say that if the value of *ptr changes , value of x changes also.
    */

    double x = 3.14;
    double* y=&x;
    double* z=&x;

    printf("y:%f\n",*y); //Value of y
    printf("z:%f\n",*z); //Value of z
    // In here , both pointers refers to value of x
    // what happens to z if we change the value of y ?
    *y=21.56;
    printf("z:%f\n",*z);
    //If there are two pointers expressing the same value and we change the value of one of them, we can say:
    //The value of the other pointer also changes.
    return 0;
}
