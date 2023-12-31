#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randomNumber , guessNumber , guessCount , score=100 ;
    srand(time(NULL));
    randomNumber = (rand()%100)+1;
    printf("Guess the number I chose between 1 and 100!\n");
    while(guessNumber!=-1)
        {
          printf("Enter your Guess\n");
          scanf("%d",&guessNumber);
          if(guessNumber==-1) break;
          if (guessNumber<1 || guessNumber>100){
           printf("Chosen number is not in between 1 and 100\n");
           continue;
          }
          guessCount++;
          if(guessNumber==randomNumber)
            {
            printf("Congrats , you guessed right number at your %d. guess\n",guessCount);
             break;
            }
            else
                {
                if(guessNumber>randomNumber)
                    {
                    printf("Enter a smaller number\n");
                    }
                else
                    {
                    printf("Enter a greater number\n");
                    }
                    score-=10;
                }


        }
    printf("Your score is:%d\n",score<0 ? 0:score);
    return 0;

}
