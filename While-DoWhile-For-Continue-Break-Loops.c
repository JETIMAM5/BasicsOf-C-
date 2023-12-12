#include <stdio.h>
#include <stdlib.h>

int main()
{


    /*while(i<5)
        {
        printf("C is a programming language\n");
        i++;
        }
        */

        /*do
            {
            printf("%d\n",i);
            i++;
            }
            while(i<10);
        */


          /*for(i=0;i<10;i++)
            {
               printf("%d\n",i);
                if(i==3){continue;}
                if(i==7){break;}
            };
            */

        int i,number;
        number=0;
        i=1;
        printf("Enter a number from 1 to 10\n");
        scanf("%d",&number);

        if(number<1 || number>10)
            {
              printf("Please don't do that\n");
              return 0;
            }
         while(i<10)
            {
              printf("%d x %d = %d\n",number,i,number*i);
              i++;
            }



    return 0;
}
