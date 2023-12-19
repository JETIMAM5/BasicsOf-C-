#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	  int i,j,sharp=0;
    printf("Enter the number of sharps:\n");
    scanf("%d",&sharp);
    for(i=1;i<=sharp;i++)
        {
            for(j=1;j<=i;j++)
                {
                printf("#");
                }
        printf("\n");
        }
    return 0;
}
