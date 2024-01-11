#include <stdio.h>
#include <stdlib.h>
double getSquare(double *ptr);

int main()
{
    double number,result;
    printf("Enter a Number:\n");
    scanf("%lf",&number);
    result = getSquare(&number);
    printf("Square of number:%.2lf\n",result);
    return 0;
}
double getSquare(double *ptr)
{
 return *ptr * *ptr;
}
