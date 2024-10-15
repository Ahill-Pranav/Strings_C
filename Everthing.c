/*
#include<stdio.h>
#include<string.h>
int main()
{
    int length;
    char string[100];
    printf("Ente rthe string:");
    scanf("%[^\n]", &string);
    fgets()
    printf(string);
}*/

//To find the length of a string

/*
#include<stdio.h> 
#include<string.h>
int main()
{
    int length=0;
    char str[100];
    printf("Enter the string:");
    scanf(" %[^\n]", str);
    for (int count ;str[length]!='\0';count++)
    {
        if (str[count]!=' ')
        {
            length++;
        }
    }
    printf("%d",length);
}
*/

//To copy one string to another 

/*
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char str1[100],str2[100];
    printf("Enter the string:");
    fgets(str1,sizeof(str1),stdin);
    printf("Original string: %s", str1);
    for (;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("\nCopied string: %s", str2);
}*/
