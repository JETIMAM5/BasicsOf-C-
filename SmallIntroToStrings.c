#include <stdio.h>
#include <stdlib.h>

int main()
{
    //(ASCII)\0 is null terminating character

    char greetings[]={"Hello C!"};
    char greetings2[]={'H','e','l','l','o',' ','C','!','\0'};

    //Strings can be declare these two ways but the first way is much easier

    int i=0, size;
    size = sizeof(greetings);
    printf("%lu\n",sizeof(greetings)); //Output will be 9 because of \0 (You don't need to add \0 in that way , C automatically adds)
    printf("%lu\n",sizeof(greetings2)); //Output will be 9 because of \0

    printf("%s\n\n",greetings);
    printf("%s\n",greetings2);
    printf("----------------------\n");
    greetings[6]= 'T'; //Changing the 6th element of array.
    printf("%s\n",greetings); //string output
    printf("----------------------\n");
    /*

    for(i=0;i<size;i++)
        {
        printf("%c\n",*(greetings+i)); //character output with pointer
        }

     */


     while (greetings[i]!='\0')
        {
        printf("%c",*(greetings+i));
        i++;
        }
    return 0;
}
