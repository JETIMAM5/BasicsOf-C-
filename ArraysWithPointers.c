#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Letters[7]={'a','b','c','d','e','f','g'};

    printf("Memory address of array's first element : %x\n",&Letters[0]);
    printf("Memory address of array's first element : %x\n",Letters);

    printf("Memory address of array's second element : %x\n",&Letters[1]);
    printf("Memory address of array's second element : %x\n",Letters+1);

    printf("Memory address of array's third element : %x\n",&Letters[2]);
    printf("Memory address of array's third element : %x\n",Letters+2);

    printf("Value of array's first element : %c\n",Letters[0]);
    printf("Value of array's first element : %c\n",*Letters);

    printf("Value of array's first element : %c\n",Letters[1]);
    printf("Value of array's first element : %c\n",*(Letters+1));

    printf("Value of array's first element : %c\n",Letters[2]);
    printf("Value of array's first element : %c\n",*(Letters+2));

    //printf("Name of Array:%x\n%",Letters);
    //The name of an array is the memory address of its first element
    //printf("4th elemet's address:%x\n%",Letters+3); //4th element's address
    return 0;
}


