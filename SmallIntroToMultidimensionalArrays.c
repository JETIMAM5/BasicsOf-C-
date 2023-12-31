#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][3] ={{2,7,19},{3,8,12}};
    matrix[0][0]=100;
    int i, j;
    for(i=0;i<2;i++)
        {
         for(j=0;j<3;j++)
            {
            printf("%5d",matrix[i][j]);
            }
          printf("\n\n");
        }

    return 0;
}
