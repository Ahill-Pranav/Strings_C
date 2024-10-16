#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char to_found;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to be found:");
    scanf(" %c",&to_found);
    str[strlen(str)-1]='\0';
    for (int i=0;i<strlen(str);i++)
    {
        if(str[i]==to_found)
        {
            printf("%c is found at index %d",to_found,i);
            break;
        }
    }
}