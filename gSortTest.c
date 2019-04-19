#include <stdio.h>
#include "array.h"
#include "gSort.h"
#include <string.h>

int intComp( void* e1, void* e2);

int main(int nWords, char *words[]){

        int *a,size;
        size = nWords;
        if(nWords < 2)
        {
          printf("Usage: [-s size] | val  val val ... ");
          return 1;
        }

        if(!strcmp("-s",words[1]))
        {
          sscanf(words[2],"%d",&size);
	  printf("size : %d\n", size);
          a = createRandomArray(size);
        }
        else
        {
          int i;
          size = size-1;
          a = createArray(nWords-1);
          for(i=1;i<nWords;i++)
          {
             sscanf(words[i],"%d",&(a[i-1]));
          }

        }

        if(!a)
        {
           printf("Problems in create Array");
           return 2;
        }
     
        printf("Displaying array before sorting\n");
        displayArray(a,size);
	printf("\n");

        gSort(a,size,sizeof(int),intComp);
       
        printf("Array after sorting\n");
        displayArray(a,size);
        printf("\n");

}

int intComp(void* a, void* b)
{
  
  return (*(int*)a -*(int*)b);
 
}
