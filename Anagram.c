#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<ctype.h>
#define alpha_size 26 

int anagram_check(char *str1,char *str2)
{
    if (strlen(str1)!=strlen(str2))
    {
        return 0;
    }
    
    int str1_count[alpha_size]={0};
    int str2_count[alpha_size]={0};
    for(int i=0;i<strlen(str1);i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if (isalpha(ch1)) {
            str1_count[ch1 - 'a']++; // Increase count for corresponding character in str1
        }

        if (isalpha(ch2)) {
            str2_count[ch2 - 'a']++; // Increase count for corresponding character in str2
        }
    }
    for(int i=0;i<alpha_size;i++)
    {
        if(str1_count[i]!=str2_count[i])
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    char str1[100], str2[100];
    printf("Enter the string 1:");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")]=0;
    printf("Enter the string 2:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]=0;
    if(anagram_check(str1,str2))
    {
        printf("The strings are anagrams of each other");
    }
    else
    {
        printf("The strings are not anagrams of each other");
    }
}