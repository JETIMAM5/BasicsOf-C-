#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  int i,j,number;
  printf("Enter a number: ");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
     {
       for(j=1;j<=number;j++)
	   {
	   	if(i==1 || i==number || j==1 || j==number)
		   {
		   	printf("* ");
		   }
		   else
		   {
		   	printf("  ");
		   }
       }
       printf("\n");
     }
     
  
}
