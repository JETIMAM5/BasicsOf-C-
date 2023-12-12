#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Program which prints selected day of the week
    //if "break" keyword isn't written after a step, program will be executed to the step which contains "break"...
     //int day = 7;
    //(day==7)? printf("19\n"): printf("20\n"); //This is the short expression of "IF" statement...
    /*switch (day)
    {
    case 1:printf("Monday\n");
       break;
    case 2:printf("Tuesday\n");
       break;
    case 3:printf("Wednesday\n");
       break;
    case 4:printf("Thursday\n");
       break;
    case 5:printf("Friday\n");
       break;
    case 6:printf("Saturday\n");
       break;
    case 7:printf("Sunday\n");
        break;
    default:printf("There is no such a day\n");
    */

    //Intertwined switch case :
    int x,y,z;
    x=3;
    y=12;
    switch(x)
    {
     case 7:z=19;
     break;
   default:switch(y)
     {
       case 12: z=10;
       break;
       default:z=-90;
     }
    }
    printf("%d\n",z);



    return 0;
}
