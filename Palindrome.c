#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int flag=1;
    printf("Enter the input:");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]=0;
    int start=0, end=strlen(str)-1;
    while(start<=end)
    {
        if(str[start]!=str[end])
        {
            flag=0;
            break;
        }
        start++,end--;
    }
    if (flag)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}