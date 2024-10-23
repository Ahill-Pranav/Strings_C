#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int alpha[26]={0};
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
            alpha[tolower(str[i])-'a']++;
        }
    }
    for (int i = 0; i<26; i++)
    {
        if (alpha[i]==1)
        {
            printf("%c",i+'a');
        }
    }
}