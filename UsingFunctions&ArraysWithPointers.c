#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void myArray(int*,int);

int main()
{
    int numbers[6]={1,7,19,23,5,15};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Previous State\n");
    printf("---------------\n");
    for(int i=0;i<size;i++)
        {
          printf("numbers[%d]:%d\n",i,numbers[i]);
        }
    myArray(numbers,size);
    printf("\n\n\n");
    printf("Next State\n");
    printf("---------------\n");
    for(int i=0;i<size;i++)
        {
          printf("numbers[%d]:%d\n",i,numbers[i]);
        }
}
void myArray(int* numbers,int size)
{
  for (int j=0;j<size;j++)
    {
    *(numbers+j) *=3;
    }
}
