#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int first , second , third , i ,number;
first = 1;
second = 1;
third = 1;
printf("Enter a number:",number);
scanf("%d",&number);
printf("1 1 ");
for(i=1;i<=number;i++)
{
first=second;
second=third;
third=first+second;
if(i<=number-2)
{
	printf("%d ",third);
}
}


}

