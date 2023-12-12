#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Why don't we start the switch case with 1 ? we dont want to use break because if we use break he loop ends at the step which includes break
    //This is not proper for our (summing)  algorithm
    //We started the algorithm in reverse order to avoid misunderstandings when calculating the total sales made on days based on the number entered by the user.
    int numberOfProducts , day;
    char *dayName;
    numberOfProducts =0;
    day=0;
    printf("Enter a number of day(1-7):\n");
    scanf("%d",&day);
    if(day<1 || day>7)
        {
        printf("Please enter a number from 1 to 7\n");
        }
     return 0;
    switch(day)
    {
      case 7:numberOfProducts+=25;
        if (day==7){dayName="Sunday";}
      case 6:numberOfProducts+=19;
        if (day==6){dayName="Saturday";}
      case 5:numberOfProducts+=15;
        if (day==5){dayName="Friday";}
      case 4:numberOfProducts+=10;
        if (day==4){dayName="Thursday";}
      case 3:numberOfProducts+=7;
        if (day==3){dayName="Wednesday";}
      case 2:numberOfProducts+=5;
        if (day==2){dayName="Tuesday";}
      case 1:numberOfProducts+=2;
        if (day==1){dayName="Monday";}
    }
    printf("%d products have been sold at %s\n",numberOfProducts,dayName);

}
