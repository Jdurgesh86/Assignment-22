#include <stdio.h>
void *f();
int main()
{
   int *a;
   a=f();   //a pointer said to be dangling if the pointing location of the pointer is deleted
 return 0;
}
void *f()
{
    printf("This location will be deleted after successful run ");
}