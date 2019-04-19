#include <stdio.h>
#include "gSort.h"
#include <stdlib.h>
#include <string.h>


void gSort(void* a, int size, int eltsize, Comparator comp)
{
  int last,i,j;
  last = size * eltsize;

  void* temp = malloc(eltsize);

 for(i = 0; i< last-eltsize; i += eltsize)
 {
   for(j = i + eltsize; j<last; j+= eltsize)
   {
      if(comp(a+i,a+j) > 0)
      {
         memcpy(temp,a+i,eltsize);
         memcpy(a+i,a+j,eltsize);
         memcpy(a+j,temp,eltsize);
      }
   }
 }

 free(temp);

}
