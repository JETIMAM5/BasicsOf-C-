#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int number ;
    printf("Enter a number (0-255):");
    scanf("%d",&number);
    printf("\nThe characater you entered:%c\n",number);
    if(isalnum(number)) // A-Z , a-z , 0-9 if the number corresponds one of them(ASCII) , output will be correct ; else , output will be wrong
        //if isalpha were in place of isalnum , this time output will be correct in the condition of the number corresponds A-Z , a-z
        //if isdigit were in place of isalnum , this time output will be correct in the condition of the number corresponds 0-9
        //if islower were in place of isalnum , this time output will be correct in the condition of the number corresponds a-z
        //if isupper were in place of isalnum , this time output will be correct in the condition of the number corresponds A-Z
        //if isspace were in place of isalnum , this time output will be correct in the condition of the number corresponds white space : " "
        {
        printf("Correct\n");
        }
    else
       {
           printf("Wrong\n");
       }

       //toupper , tolower

       //printf("%c\n",toupper('a'));
      //printf("%c\n",tolower('A'));
      //printf("%d\n",toupper('a'));
      //printf("%d\n",tolower('A'));

    return 0;
}
