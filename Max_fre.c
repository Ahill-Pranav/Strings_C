#include<stdio.h>
#include<string.h>
# define ascii_size 256
int main()
{
    char str[100];
    int Char_ascii[ascii_size],max=0,ascii;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,'\n')]=0;
    for(int i=0;i<=ascii_size;i++)
    {
        Char_ascii[i]=0;
    }
    for(int i=0;str[i]!='\0';i++)
    {
        ascii=(int)str[i];
        Char_ascii[ascii]+=1;
    }
    for(int i=0;i<ascii_size;i++)
    {
        if(Char_ascii[max]<Char_ascii[i])
        {
            max=i;
        }
    }
    printf("The character %c occurs %d times",(char)max,Char_ascii[max]);
}