#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    int numbers[7];
    fptr=fopen("C:\\Users\\Berat\\OneDrive\\Masaüstü\\data\\data.txt","r");
    int i;
    if(fptr==NULL)
        {
        printf("File open unsuccesful\n");
        }
    else
       {
        printf("Enter 7 numbers\n");


        fread(numbers,sizeof(int),7,fptr);
        for(i=0;i<7;i++)
            {
            printf("%d ",numbers[i]);
            }

        printf("Data was successfully written to the file\n");
       }
    fclose(fptr);
    return 0;
}
