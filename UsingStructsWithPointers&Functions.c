#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
   char* bookname;
   char* author;
   int page;
   int year;
};
void PrintMe(struct books*);

int main()
{
   struct books x;
   struct books* y;
   y=&x;
   (*y).bookname="Harry Potter";
   (*y).author="J.K.Rowling";
   (*y).page=500;
   (*y).year=2001;
    PrintMe(y);

    return 0;
}
void PrintMe(struct books* ptr)
{
   printf("Book Name =%s\n",(*ptr).bookname);
   printf("Author    =%s\n",(*ptr).author);
   printf("Page      =%d\n",(*ptr).page);
   printf("Year      =%d\n",(*ptr).year);
}
