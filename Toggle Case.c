// Converting upper to lowercase and vice versa 

#include<stdio.h>
#include<string.h>
# define size 100
int main()
{
    char str[size];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for (int i=0;str[i]!='\0';i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        else if (str[i]>='a'  && str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        
    }
    printf("Upper to lower:%s", str);
}