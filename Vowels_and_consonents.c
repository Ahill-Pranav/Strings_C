
#include<stdio.h>
#include<string.h>
int main()
{
    char *vowels="aeiouAEIOU";
    int vowel=0, consonent=0;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if ((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z'))
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