#include <stdio.h>
#include<stdlib.h>
int main()
{
    char *str,c;
    int i=0,j=1;
    str=(char*)malloc(sizeof(char));
    printf("Enter the string :");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j*sizeof(char));
        str[i]=c;
        i++;
    }
    str[i]='\n';
    printf("You Enter the string :%s",str);
    return 0;
}
