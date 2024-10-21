#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int num=0,found_num=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
            num=num*10+(str[i]-'0');
            found_num=1;
        }
        else if(found_num)
        {
            printf("%d\n",num);
            found_num=0;
            num=0;
        }
    
    }
    if(found_num)
    {
        printf("%d",num);
    }
}