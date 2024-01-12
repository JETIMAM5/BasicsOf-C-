#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    char data[100];
    fptr=fopen("C:\\Users\\Berat\\OneDrive\\Masaüstü\\data\\data.txt","r");
    if(fptr==NULL)
        {
        printf("File Open Unsuccesful!\n");
        }

        //Writing Process
    /*else
        {
           fputs("\n New World Order!",fptr);
        }
     */
     //Reading Process
        else
        {
            while(fgets(data,100,fptr))
                {
                printf("%s\n",data);
                }
        }

    fclose(fptr);
    return 0;
}
