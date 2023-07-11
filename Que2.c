#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numofvalues,sum=0;
    printf("Enter the number of values: ");
    scanf("%d",&numofvalues);
    int *arr;
    arr=calloc(numofvalues,sizeof(int));
    printf("Enter the array values: ");
    for(int i=0;i<numofvalues;i++)
        scanf("%d",arr+i);
    for(int i=0;i<numofvalues;i++)
        sum=sum+*(arr+i);
    float avg=sum/numofvalues;
    printf("The average of numbers in the array is %.2f",avg);
}