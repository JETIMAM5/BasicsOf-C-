#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr,*fptrcopy;
    fptr=fopen("C:\\Users\\Berat\\OneDrive\\Masaüstü\\data\\data.txt","r");
    fptrcopy =fopen("C:\\Users\\Berat\\OneDrive\\Masaüstü\\data\\datacopy.txt","w");
    if(fptr==NULL)
        {
        printf("data.txt open unsuccesful!\n");
        }
    else
        {
        if(fptrcopy==NULL)
            {
            printf("datacopy.txt open unsuccesful!\n");
            }
        else
            {
            while(!feof(fptr))
                {
                putc(getc(fptr),fptrcopy);
                }
            printf("The file has been copied!");
            }
        }

    fclose(fptr);
    fclose(fptrcopy);
    return 0;
}
