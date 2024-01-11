#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    char message[]={"String\'s \\ is \"very\" important"};
    char message[]={"String is \"very\" important\0-This will not be printed because the strings end with \0."}; //
    printf("%s",message);
    */
    char* messagePtr="How are you today?\n";
    int i=0;
    while(*(messagePtr+i)!='\0')
        {
        printf("%c",*(messagePtr+i));
        i++;
        }

    return 0;
}
