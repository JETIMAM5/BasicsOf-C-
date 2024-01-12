#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct myDate
{
  int day;
  int month;
  int year;

};
int main()
{
    struct myDate x;
    struct myDate y;

    printf("Please enter your date of birth in DD/MM/YYYY format:\n");
    scanf("%d%d%d",&x.day,&x.month,&x.year);

    printf("Enter today's date in DD/MM/YYYY format:\n");
    scanf("%d%d%d",&y.day,&y.month,&y.year);

    if(x.day>y.day)
        {
          y.day+=30;
          y.month-=1;
        }
    if(x.month>y.month)
       {
          y.month+=12;
          y.year-=1;
        }
    printf("\nYou Have Lived:\n");
    printf("%d day ,%d month ,%d years ",y.day-x.day,y.month-x.month,y.year-x.year);
    printf("till now\n");
    return 0;
}
