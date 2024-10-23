#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]= 0;
    int end = strlen(str);
    for (int start=strlen(str)-1; start >=0;start-- )
    {
        if(str[start]==' ' || start==0)
        {
             int wordStart = (start == 0) ? start : start + 1;
            for (int i = wordStart; i <=end; i++)
            {
                printf("%c",str[i]);
            }
            end=start;
            
            printf(" ");
        }
    }
    
}