#include <stdio.h>
#include <stdlib.h>

enum levels
{
//Normally starts from 0 but we can assign numbers to them
JANUARY=1,
FEBRUARY,
MARCH,
APRIL,
MAY,
JUNE,
JULY,
AUGUST,
SEPTEMBER,
OCTOBER,
NOVEMBER,
DECEMBER
};
int main()
{
    enum levels myConst;
    myConst=SEPTEMBER;
    if(myConst==12 || myConst==1 || myConst==2)
        {
            printf("Winter");
        }
     else if (myConst== 3 || myConst == 4 || myConst==5)
        {
           printf("Spring");
        }
     else if (myConst==6 || myConst==7 || myConst==8)
        {
            printf("Summer");
        }
     else
        {
           printf("Fall");
        }
    return 0;
}
