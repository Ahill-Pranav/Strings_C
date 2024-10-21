/* "Apple, orange10"  replace the 'a' - 'b',
 'e' - 'f' and for the
  digits replace it with the the letter 'd'*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a')
        {
            printf("%c",'b');
        }
        else if(str[i]=='e')
        {
            printf("%c",'f');
        }
        else if(isdigit(str[i]))
        {
            printf("%c",'d');
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}