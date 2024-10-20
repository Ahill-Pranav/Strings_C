#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char *vowels="aeiouAEIOU";
    int vowel=0, consonent=0;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if (isalpha(str[i]))
        {
            if(strchr(vowels,str[i]))
            {
                vowel++;
            }
            else
            {
                consonent++;
            }
        }
    }
    printf("Vowels:%d\n",vowel);
    
    printf("Consonents:%d",consonent);
}