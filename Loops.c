#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//while loop
	/*
	int i = 10;
	while(i >= 1)
	{
		printf("i: %d\n", i);
		i--;
	}*/
	
	//do while loop
	/*
	int j = 1;
	do{
	
		printf("j: %d\n", j);
		j++;
	}while(j <= 10);
	*/
	//for loop
	/*
	int k;
	for(k = 1; k <= 10; k++)
	{
		printf("k: %d\n", k);
		
	}
	*/
	//Ekrana 5 defa ‘merhaba’ yazdýran C kodunu yazýnýz.
	/*
	int l;
	for(l = 1; l <= 5; l++)
	{
		printf("Merhaba\n");
	}*/
	//1’den 10’a kadar sayýlarýn toplamýný ekrana yazdýran C programýný yazýnýz.
    /*
    int c, sum = 0;
    
    for(c = 1; c <= 10; c++)
    {
    	sum = sum + c;	
	}
	printf("sum: %d\n", sum);
	printf("%d", c);
	*/
	//ASCII table
	int z;
	for(z = 1; z <= 256; z++)
	{
		printf("%d:%c\n",z,z);
	}
	
}
