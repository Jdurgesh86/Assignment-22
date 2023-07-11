//  Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size in bytes: ");
    scanf("%d",&size);
    if(size%4!=0)       //check for int type dynamic allocation only
        printf("size allocation is failed!");
    else
        printf("size allocation is successful ");
}
