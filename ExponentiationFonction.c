#include <stdio.h>
#include <stdlib.h>
float exponentiation(float x,int y);

int main()
{
    float base =0 , result=0;
    int exponent=0;
    printf("Enter exponent and base values:\n");
    scanf("%f %d",&base,&exponent);
    result = exponentiation(base,exponent);
    printf("Result : %f",result);
    return 0;
}
float exponentiation(float x,int y)
{
float result = 1;
int i;
if(y<0)
    {
    for(i=0;i<-y;i++)
        {
        result*=1/x;
        }
    }
    else
        {
        for(i=0;i<y;i++)
            {
            result*=x;
            }
        }
}
