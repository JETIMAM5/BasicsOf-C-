#include <stdio.h>
#include <stdlib.h>
void upperToLower(char*);
void lowerToUpper(char*);
int main()
{
    char message[100];
    int choice;
    puts("Make a Choice\n");
    puts("1- Convert from uppercase to lowercase\n");
    puts("2- Convert from lowercase to uppercase\n");
    scanf("%d",&choice);
    getchar();
    switch(choice)
    {
    case 1:
        puts("Enter a sentence with uppercase letters:\n");
        gets(message);
        upperToLower(message);
        break;
    case 2:
        puts("Enter a sentence with lowercase letters:\n");
        gets(message);
        lowerToUpper(message);
        break;
    default: puts("Wrong choice\n");

    }
    return 0;
}
void upperToLower(char* ptr)
{
  for(;*ptr!=0;ptr++)
    {
    if(*ptr>='A'&& *ptr<='Z')
        {
        putchar(*ptr+32); //ASCII CODES
        }
    else
        {
        putchar(*ptr);
        }
    }
}
void lowerToUpper(char* ptr)
{
  for(;*ptr!=0;ptr++)
    {
    if(*ptr>='a'&& *ptr<='z')
        {
        putchar(*ptr-32); //ASCII CODES
        }
    else
        {
        putchar(*ptr);
        }
    }
}

