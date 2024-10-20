#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    int current_num=0,sum=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if(isdigit(str[i]))
        {
            current_num=current_num*10+ (str[i]-'0');
        }
        else
        {
            sum+=current_num;
            current_num=0;
        }
    }
    sum+=current_num;
    printf("The total sum is: %d",sum);

}