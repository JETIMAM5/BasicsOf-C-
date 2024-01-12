#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculate(char*);

int main()
{
    char message[100];
    puts("Enter a sentence\n");
    gets(message);

    calculate(message);
    return 0;
}
void calculate(char* ptr)
{
  int letters[26],i=0,lenght;
  char activeLetter;
  lenght = strlen(ptr);

  for(i=0;i<26;i++)
    {
    letters[i]=0;
    }
  for(i=0;i<lenght;i++)
    {
        activeLetter = tolower(*(ptr+i));
        letters[activeLetter-97]++;
    }
    printf("Letter\tRepeat\n");
    printf("------\t------\n");
    for(i=0;i<26;i++)
    {
        if(letters[i]!=0)
            {
            printf("%c\t%d\n",i+97,letters[i]);
            }

    }

}
