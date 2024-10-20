#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 char str[100];
 printf("Enter the string:");
 fgets(str,sizeof(str),stdin);
 str[strcspn(str,"\n")]=0;   
  if(isalpha(str[0]) && islower(str[0]))
        {
            str[0]=toupper(str[0]);
        }
 for(int i =0;i<strlen(str);i++)
 {
        if (str[i]==' ' && str[i+1]!='\0' && isalpha(str[i+1]))
        {
            str[i+1]= toupper(str[i+1]);
        }
 }
 printf("%s",str);
}