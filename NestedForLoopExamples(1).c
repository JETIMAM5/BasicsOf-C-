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
       for(j=1;j<=i;j++)
	   {
	   	printf("%d ",i);
	   }
	   printf("\n");
     }
     
  printf("\n");
  
   for(i=1;i<=number;i++)
   {
   	for(j=1;j<=number-(i-1);j++)
	   {
	   	printf("%d ",i);
	   }
	   printf("\n");
   }  


}

