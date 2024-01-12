#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* messagePtr = "What an interesting language";
    char myArray[30]="Hello C!";
    puts(messagePtr);
    puts(myArray);

    printf("----------------------------\n\n");

    char  myMessage[100];
    puts("Please enter a sentence:\n");
    gets(myMessage);
    puts("\nYour sentence is:\n");
    puts(myMessage);
    return 0;
}
