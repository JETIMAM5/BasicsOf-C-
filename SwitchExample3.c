#include <stdio.h>
#include <stdlib.h>

int main()
{
   char myOperator;
   float number1,number2;
   printf("Choose an operator(+,-,*,/):\n");
   scanf("%c",&myOperator);

   printf("Enter two numbers\n");
   scanf("%f %f",&number1,&number2);

   printf("\nOperator:%c\nNumber1:%f\nNumber2:%f\n",myOperator,number1,number2);

   switch(myOperator)
   {
   case '/':printf("%f",number1/number2);break;
   case '*':printf("%f",number1*number2);break;
   case '+':printf("%f",number1+number2);break;
   case '-':printf("%f",number1-number2);break;
   default:printf("You entered the wrong operator\n");
   }
    return 0;
}
