#include <stdio.h>
#include <stdlib.h>

//Efficient way to create a function is declaring it before main , and defining it after main
void allNumbers(int MyNumbers[6]);
int sumNumbers(int x,int y);
int main()
{
    int MyNumbers[6] = {10,20,30,40,50,60};
    allNumbers(MyNumbers);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("%d\n",sumNumbers(1,8));

    return 0;
}
int sumNumbers(int x,int y)
{
 return x+y;
}
 void allNumbers(int MyNumbers[6])
{
for(int i=0;i<6;i++)
    {
    printf("%d. Value of Array is %d\n",i,MyNumbers[i]);

    }
}


