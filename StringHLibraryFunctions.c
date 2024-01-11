#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    char Alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //Lenght
    printf("Lenght of Alphabet is :%d\n",strlen(Alphabet));
    printf("-------------------------------------\n");
    //Sizeof
    printf("Sizeof of Alphabet is :%d\n",sizeof(Alphabet)); // output will be strlen+1 because of \0 sizeof gives us the number of bytes held in memory.

    printf("-------------------------------------\n");
    //Concatenation of two strings
    char str1[30]="Hello ";
    char str2[]="C Language!";
    strcat(str1,str2);
    printf("%s\n",str1);

    printf("-------------------------------------\n");
    //Copying
    char str3[30]="Dear Friends";
    char str4[30];
    strcpy(str4,str3);
    printf("%s\n",str4);

    printf("-------------------------------------\n");
    //Comparing
    char str5[30]="I am fine.";
    char str6[30]="I am fine.";
    if(strcmp(str5,str6)==0)
        {
         printf("These string are equal\n");
        }
    else
        {
        printf("These string are not equal\n");
        }



    return 0;
}
