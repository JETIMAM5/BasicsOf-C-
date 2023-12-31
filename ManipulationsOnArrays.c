#include <stdio.h>
#include <stdlib.h>

int main()
{
    double myValue,myArray[10];
    int choice,index;
    do
        {
        printf("Make a choice (-1 for exit)\n");
        printf("\t1. Write to array\n");
        printf("\t2. Read from array\n");
        scanf("%d",&choice);
        if(choice==-1) break;
        if(choice !=1 && choice !=2)
            {
            printf("Invalid operation number!!\n");
            continue;
            }
        printf("Enter the index number:\n");
        scanf("%d",&index);
        if(index<0 || index>9)
            {
             printf("Index number must be in the bounds of array!!\n");
             continue;
            }
            switch(choice)
            {
            case 1:
                printf("\nEnter the value:\n");
                scanf("%lf",&myValue);
                myArray[index]=myValue;
                printf("Succesfuly Writed!");
                break;
            case 2:
                printf("myArray[%d]:%.2lf\n\n",index,myArray[index]);
                break;
            }


        }
        while(choice !=-1);


    return 0;
}
