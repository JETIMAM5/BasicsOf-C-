#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    fptr=fopen("C:\\Users\\Berat\\OneDrive\\Masaüstü\\data\\data.txt","w");
    char name;
    if(fptr==NULL)
        {
        printf("File Open Unsuccesful");
        }
    else
        {
        for(name='A';name<='Z';name++)
            {
                putc(name,fptr);
                putc('\n',fptr);
            }
        printf("Data is written to the file!\n");
        }
    fclose(fptr);
    return 0;
}
