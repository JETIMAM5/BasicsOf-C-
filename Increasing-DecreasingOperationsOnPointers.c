#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Type mismatch
    /*
    double x = 3.1415;
    int* ptr = &x;
    printf("%d\n",*ptr);
    //Such use will result in data loss.
    */

    char a = 'f';
    double b = 3.1415;
    int c = 8;

    char* ptra =&a;
    double* ptrb =&b;
    int* ptrc =&c;
    /*
    printf("Pointer a : %x\n",ptr);
    ptr++;//Address of ptr increases 1;
    printf("Pointer a : %x\n",ptr);
    */
    printf("First Addresses\n\n");
    printf("First Address of a:%x\tValue of a:%c\n",ptra,*ptra);
    printf("First Address of b:%x\tValue of a:%lf\n",ptrb,*ptrb);
    printf("First Address of c:%x\tValue of a:%d\n",ptrc,*ptrc);
    printf("Pointer Address of c:%x\n\n\n",&ptrc);

    ptra++;  //1 byte upward
    ptrb+=3; //24 byte upward
    ptrb-=4; //16 byte downward

    printf("Next Addresses\n\n");
    printf("Next Address of a:%x\tValue of a:%c\n",ptra,*ptra);
    printf("Next Address of b:%x\tValue of a:%lf\n",ptrb,*ptrb);
    printf("Next Address of c:%x\tValue of a:%d\n",ptrc,*ptrc);
    printf("Pointer Address of c:%x\n",&ptrc);

    //Pointer's address does not change
    return 0;
}
