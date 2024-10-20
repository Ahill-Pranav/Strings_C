#include<stdio.h>
#include<string.h>
# define alpha_size 26
#include<ctype.h>
void distinct_element(char str[],int len)
{
    int arr[alpha_size]={0};
    char character;
    for(int i=0;i<alpha_size;i++)
    {
        if(isalpha(str[i]))
        {
            arr[str[i]-'a']+=1;
        }
    }
    for (int i=0;i<len;i++)
    {
        if(arr[i]==1)
        {
            printf("%c",arr[i]);
        }
    }
}
int main()
{
    char str[100];
    printf("Enter the string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    distinct_element(str,strlen(str));
}