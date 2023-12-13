#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Program that prints prime numbers from 2 to number received from the user.
 int number,i,j,control;
 printf("Enter a number\n");
 scanf("%d",&number);
 for(i=2; i<number; i++)
    {
        control=1;
    for(j=2; j<=i/2; j++)
        {
        if(i%j==0)
            {
            control=0;
            break;
            }
        }
        if(control !=0)
            {
            printf("%d ",i);
            }
    }
    return 0;
}
