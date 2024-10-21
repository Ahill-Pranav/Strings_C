#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main()
{
    char str[100];
    int num=0,numlength=0,rev_num=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isdigit(str[i]))
        {
            num+=str[i]-'0';
        }
    }
    printf("%d",num);
    while (num>0)
    {
        rev_num=rev_num*10+(num%10);
        num/=10;
    }
    printf("\n%d",rev_num);
    
}