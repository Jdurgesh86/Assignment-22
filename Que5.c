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
        scanf("%d",arr+i);
        sum=sum+*(arr+i);
    }
    printf("The array elements you enter : ");
    for(int i=0;i<numofvalues;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\nThe sum of Array values is %d",sum);
    free(arr);
}