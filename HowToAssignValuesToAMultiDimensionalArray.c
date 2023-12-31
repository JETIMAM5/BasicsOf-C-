#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,i,j;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&row,&column);

    int matrix[row][column];

    for(i=0;i<row;i++)
        {
        for(j=0;j<column;j++)
            {
            printf("\nmatrix[%d][%d]=",i,j);
             scanf("%d",&matrix[i][j]);
            }
        }
        printf("\nYour Array\n");
        for(i=0;i<row;i++)
        {
        for(j=0;j<column;j++)
            {
            printf("%4d",matrix[i][j]);
            }
            printf("\n\n");
        }

    return 0;
}
