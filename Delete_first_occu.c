#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100], char_to_del;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the character to delete:");
    scanf(" %c",&char_to_del);
    str[strcspn(str,"\n")]='\0';
    int index=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==char_to_del)
        {
            index=i;
            break;
        }
    }
    for(int i=0;i<strlen(str) && str[i]!='\0';i++)

    {
        if(i!=index)
        {
            printf("%c",str[i]);
        }
    }
    
}