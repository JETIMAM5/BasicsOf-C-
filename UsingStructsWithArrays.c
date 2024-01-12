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

int main()
{
    int i;
    struct books x[2];
    x[0].bookname ="Harry Potter";
    x[0].author ="J.K. Rowling";
    x[0].page=428;
    x[0].year=2001;

    x[1].bookname ="Knife";
    x[1].author ="Jo Nesbo";
    x[1].page=428;
    x[1].year=2009;

    for(i=0;i<2;i++)
        {
        printf("%d.Book\n",i+1);
        printf("Book Name = %s\n",x[i].bookname);
        printf("Author    = %s\n",x[i].author);
        printf("Page      = %d\n",x[i].page);
        printf("Year      = %d\n\n",x[i].year);
        }
    return 0;
}
