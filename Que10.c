#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max=-999999,min=999999;
    int numofvalues;
    printf("Enter the number of values: ");
    scanf("%d",&numofvalues);
    int *arr;
    arr=(int*)malloc(sizeof(int));
    printf("Enter the array values: ");
    for(int i=0;i<numofvalues;i++)
    {
        scanf("%d",arr+i);
        if(*(arr+i)>max)
            max=*(arr+i);
        
        if(*(arr+i)<min)
            min=*(arr+i);
    }
    printf("The array elements you enter : ");
    for(int i=0;i<numofvalues;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\nThe maximum value is %d and mininum is %d",max,min);
    free(arr);
}