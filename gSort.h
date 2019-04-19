typedef int (* Comparator)(void *, void *);
void gSort(void*a, int size, int eltsize, Comparator comp);
