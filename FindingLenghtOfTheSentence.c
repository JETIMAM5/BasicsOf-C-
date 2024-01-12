#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findLength(char*);

int main()
{
    char Message[100];
    puts("Enter a sentence:\n");
    gets(Message);

    printf("Length:%d\n",findLength(Message));
    return 0;
}
int findLength(char* ptr)
{
    //With Loops
     /*
     int i = 0;
     while(ptr[i]!='\0')
        {
        i++;
        }
     return i;
     */
     //With String.h functions
     return strlen(ptr);
}

