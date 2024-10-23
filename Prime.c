#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for (int i=0;i<strlen(str);i++)
    {
        if(isalpha(str[i]))
        {
            count++;
        }
    }
    for (int i = 2; i*i <=count; i++)
    {
        if (count<2)
        {
             printf("Not a prime");
            break;
        }
       else if (count%i==0)
        {
            printf("Not a prime");
            break;
        }
        else
        {
             printf("Is a prime");
            break;
        }

    }
    
}