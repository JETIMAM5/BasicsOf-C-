#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Ex 1
	/*
	int a = 5, b = 10;
	
	if(a > b)
		printf("a > b");
	else
		printf("a < b");
		*/
	//Ex: 2
	/*
	int time = 8;
	
	if(time < 9)
		printf("Good morning");
		
	else if(time < 17)
		printf("Good afternoon");
		
	else
		printf("Good evening");
		*/
	//Ex 3: Ternary Operator
	/*
	int time = 10;
	
	(time < 9) ? printf("Good morning") : printf("Good evening");
	*/
	//Ex 4: switch - case yapısı
	/*
	int day;
	
	printf("Please enter number between 1 and 7: \n");
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
		printf("Monday");
		break;
	case 2: 
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Please enter a number 1 - 7");
	}
	*/
	//Ex 6: Klavyeden girilen bir sayının pozitif bir sayı mı negatif bir sayı mı olduğunu ekrana yazdıran akış şemasını çiziniz ve C kodunu yazınız.
	/*
	int number;
	printf("Enter a number\n");
	scanf("%d", &number);
	
	if(number < 0)
		printf("%d: Negative number", number);		
	else if(number > 0)
		printf("%d: Positive number", number);
	else
		printf("Zero");
	*/
	//Ex 7. Klavyeden girilen bir sayının çift bir sayı mı tek bir sayı mı olduğunu ekrana yazdıran akış şemasını çiziniz ve C kodunu yazınız.
	
	int number;
	printf("Enter a number\n");
	scanf("%d", &number);
	
	if(number %2 == 0)	
		printf("even number");
	else
		printf("odd number");
}
}
