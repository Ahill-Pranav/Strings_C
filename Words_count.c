#include<stdio.h>
#include<string.h>
int main()
{
    int count=1;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            ++count;
        }
    }
    printf("%d is the number of words",count);
}