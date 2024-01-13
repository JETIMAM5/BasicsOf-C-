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
    else
        {
          printf("Cursor's location:%d\n",ftell(fptr));
          fseek(fptr,10,SEEK_SET);
          printf("Cursor's location:%d\n",ftell(fptr));
          fgets(data,100,fptr);
          printf("%s\n",data);
          printf("Cursor's location:%d\n",ftell(fptr));
          rewind(fptr);
          printf("Cursor's location:%d\n",ftell(fptr));
          fgets(data,100,fptr);
          printf("%s\n",data);
        }
    fclose(fptr);
    return 0;
}
