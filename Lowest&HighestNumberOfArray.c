#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,big=0,small=100,bigIndex,smallIndex;
    int notes[100],studentNo[100];

    printf("Enter the class size:\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        {
        printf("Student No and note:\n");
        scanf("%d%d",&studentNo[i],&notes[i]);
        }
    for(i=0;i<size;i++)
        {
        if(notes[i]>big)
            {
            big=notes[i];
            bigIndex=i;
            }
        if(notes[i]<small)
            {
            small=notes[i];
            smallIndex=i;
            }
        }
        printf("The student has the number %d gets the hightes note (%d)\n",studentNo[bigIndex],big);
        printf("The student has the number %d gets the lowest note (%d)",studentNo[smallIndex],small);
    return 0;
}
