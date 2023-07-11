#include<stdio.h>
#include<stdlib.h>
int main()
{
    int numofvalues,sum=0;
    printf("Enter the number of values: ");
    scanf("%d",&numofvalues);
    int *arr;
    arr=(int*)malloc(sizeof(int));
    printf("Enter the array values: ");
    for(int i=0;i<numofvalues;i++)
    {
        scanf("%d",arr);
        arr=realloc(arr,sizeof(int));
        sum=sum+*(arr);
    }
    free(arr);
    printf("The sum of Array values is %d",sum);
}