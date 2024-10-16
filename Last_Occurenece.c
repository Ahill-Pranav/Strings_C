#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], to_found;
    int flag=0;
    printf("ENter the string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to be found:");
    scanf(" %c",&to_found);
    str[strlen(str)-1]='\0';
    for (int i = strlen(str)-1; i > 0; i--)
    {
        if(str[i]==to_found)
        {
            printf("%c occurs at %d index for the last time",to_found,i );
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {
        printf("%c doesn't occurs anywhere",to_found);
    }
}