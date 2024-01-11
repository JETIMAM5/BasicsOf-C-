#include <stdio.h>
#include <stdlib.h>

int main()
{
    char MyLetter[5]={'x','y','z','a','f'};
    int MyNumbers[5]={7,1,19,23,5};
    int i;
    printf("MyLetter Array\n");
    printf("--------------\n");
    for(i=0;i<5;i++)
        {
        printf("MyLetter[%d]:%c\n",i,*(MyLetter+i));
        }
    printf("\n\n\n\n");
    printf("MyNumbers Array\n");
    printf("--------------\n");
    for(i=0;i<5;i++)
        {
        printf("MyNumbers[%d]:%d\n",i,*(MyNumbers+i));
        }
    printf("\n\n\n\n");
    printf("MyLetter Array Address\n");
    printf("--------------\n");
    for(i=0;i<5;i++)
        {
        printf("MyLetter[%d]:%x\n",i,(MyLetter+i));
        }
    printf("\n\n\n\n");
    printf("MyNumbers Array Address\n");
    printf("--------------\n");
    for(i=0;i<5;i++)
        {
        printf("MyNumbers[%d]:%x\n",i,(MyNumbers+i));
        }
    return 0;
}
