#include<stdio.h>
#include<string.h>
int main()
{
    int alphabet=0, numbers=0, special_char=0;
    char str[100];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for (int i=0; str[i]!='\0'; i++)
    {
        if ((str[i]>='a' && str[i]<='z') ||(str[i]>='A' && str[i]<='Z'))
        {
            alphabet++;
        }
        else if (str[i]>='0'&&str[i]<='9')
        {
            numbers++;
        }
        else
        {
            special_char++;
        }
    }
    printf("Alphabet count:%d\n",alphabet);
    printf("Numners count:%d\n",numbers);
    printf("Special char count:%d",special_char);
}
