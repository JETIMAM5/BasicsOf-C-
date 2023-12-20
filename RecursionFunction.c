#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = sumNumber(7);
    printf("%d",result);
    return 0;
}
int sumNumber(int i)
{
 if(i>0)
    {
    return i+sumNumber(i-1);}
 else

    {
    return 0;
    }
}
