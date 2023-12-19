#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
  int x,y,OBEB=0,OKEK=0,smallNumber,i;
  printf("OKEK ve OBEB i alinacak sayilari giriniz:\n");
  scanf("%d%d",&x,&y);
  if(x<y)
  {
  	smallNumber=x;
  }
  else
  {
  	smallNumber=y;
  }
  for(i=2; i<=smallNumber; i++)
  {
  	if((x%i==0)&&(y%i==0))
	  {
	  	OBEB=i;
	  }
  }
  if(OBEB!=0)
  {
  	OKEK = OBEB*x/OBEB*y/OBEB;
  	printf("%d ve %d sayilarinin OBEB i %d dir\n",x,y,OBEB);
  	printf("%d ve %d sayilarinin OKEK i %d dir\n",x,y,OKEK);
  }
  else
  {
  	OKEK = x*y;
  	printf("%d ve %d sayilari icin OKEK degeri %d\n",x,y,OKEK);
  	printf("%d ve %d sayilari icin OBEB degeri yoktur\n",x,y);
  }
return 0;
}

