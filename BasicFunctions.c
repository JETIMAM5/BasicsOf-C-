#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void MyFunciton();
void Bye();
void Funct(char ch[]);
int main()
{
 /*char ch ;
 ch = getchar();//klavyeden karakter verisi almak i�in kullan�l�r...
 putchar(ch);//printf("%c",ch); yerini tutmaktad�r ...*/

//printf("%.2f\n",sqrt(900.00));
 //MyFunciton();
 //Bye();
 //Funct("Ali");
 //Funct("Ahmet");
	int a =1;
	do
        {
            printf("%d\n",a);
        }
	while(a<100);
        {
        printf("%d\n",a);
        }


 return 0;
}






void MyFunciton()
{
printf("Function is declared\n");
}
void Bye()
{
printf("Bye");
}

void Funct(char ch[])
{
    printf("Hello %s\n",ch);
}



