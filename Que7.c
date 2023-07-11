#include <stdio.h>
#include<stdlib.h>
void leak();
int main()
{
    
   leak();  //memory leak done when we don't know the reference variable to that memory address
    //because of that we can't access that memory location
    return 0;
}
void leak()
{
    int *p;
    p=(int*)malloc(sizeof(int));
    
}
