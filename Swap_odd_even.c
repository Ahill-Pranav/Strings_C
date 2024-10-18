#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for (int even=0,odd=1;str[even]!='\0' &&str[odd]!='\0' ;even+=2,odd+=2)
    {
        char temp=str[odd];
        str[odd]=str[even];
        str[even]=temp;
    }
    printf("%s",str);
}