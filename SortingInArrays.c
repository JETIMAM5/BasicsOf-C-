#include <stdio.h>
#include <stdlib.h>


void sort();
void writeTheArray();
void writeTheArrayReverse();
int number[7];
int i;

int main()
{

    printf("Please enter the numbers of array\n");
    for(int i=0;i<7;i++)
        {
        scanf("%d",&number[i]);
        }
    printf("\nBefore Sorting\n");
    writeTheArray();
    printf("\nArray is Sorting...\n");
    sort();
    printf("\nAfter Sorting\n");
    writeTheArray();
    printf("\nArray is sorting in reverse...\n");
    writeTheArrayReverse();


}
void sort()
{
 int j,reserve;
 for(i=0;i<7;i++)
    {
    for(j=i+1;j<7;j++)
        {
        if(number[j]<number[i])
            {
             reserve = number[i];
             number[i]=number[j];
             number[j]=reserve;
            }
        }
    }
}
void writeTheArray()
{
    for(i=0;i<7;i++)
        {
        printf("%d ",number[i]);
        }
        printf("\n");
}
void writeTheArrayReverse()
{
   for(i=6;i>=0;i--)
    {
    printf("%d ",number[i]);
    }
    printf("\n");
}


