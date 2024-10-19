#include<stdio.h>
#include<string.h>
int palindrome(char str[],int start,int end)
{
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void palindrome_substring(char str[],int len)
{
    int maxlength=1,currentlength,start;
    for(int i=0;i<len;i++)
    {
        for (int j = i; j < len; j++)
        {
            if(palindrome(str,i,j))
            {
                currentlength=j-i+1;
                if(currentlength>maxlength)
                {
                    maxlength=currentlength;
                    start=i;
                }
            }
        }
        
    }

    for (int i = start; i < start+maxlength; i++)
    {
        printf("%c",str[i]);
    }
    
}
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    palindrome_substring(str,strlen(str));
    
}