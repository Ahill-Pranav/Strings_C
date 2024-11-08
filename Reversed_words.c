#include <stdio.h>
#include<string.h>
int main() 
{

char *words[50], str[100],temp[100];
int count=0;
fgets(str,sizeof(str),stdin);
str[strcspn(str,"\n")]=0;
strcpy(temp, str);
char *token=strtok(temp," ");
while(token!=NULL)
{
    words[count++]=token;
    token=strtok(NULL," ");
}
for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" "); // Add space between words
    }
    printf("\n");
}