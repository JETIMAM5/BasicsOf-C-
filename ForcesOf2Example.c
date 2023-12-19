#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  double wheat=1 ;
  double sumWheat=0.0;
  for(i=0;i<64;i++)
    {
    printf("%d. kare icin verilecek bugday sayisi:%20.0f\n",i,wheat);
    sumWheat+= wheat;
    wheat *= 2;
    }

    printf("\n Totalde verilecek bugday sayisi");
  return 0;
}
