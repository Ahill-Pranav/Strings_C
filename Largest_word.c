#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int index=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    char copy[100];
    strcpy(copy,str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(str[index]<str[i])
        {
            index=i;
        }
    }
    printf("%c",copy[index]);
}
