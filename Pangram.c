#include<stdio.h>
#include<string.h>
#include<ctype.h>
# define alpha_size 26
int pangram(char str1[],char str2[],int len1,int len2)

{
    char character, alpha[alpha_size]={0};
    for(int i=0;i<len1;i++)
    {
        if(isalpha(str1[i]))
        {
            character=tolower(str1[i]);
            alpha[character-'a']++;
        }
    }
     for(int i=0;i<len2;i++)
    {
        if(isalpha(str2[i]))
        {
            character=tolower(str2[i]);
            alpha[character-'a']++;
        }
    }

    for (int i = 0; i < alpha_size; i++)
    {
        if (alpha[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str1[100],str2[100];
    printf("Enter the string:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]=0;
    
    printf("Enter the string:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;

    if(pangram(str1,str2,strlen(str1),strlen(str2)))
    {
        printf("The string is a pangram.\n");
    }
    else
    {
        printf("The string is not a pangram.\n");
    }
}