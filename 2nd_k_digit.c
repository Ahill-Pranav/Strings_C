#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    char non_repeating_char[strlen(str)];
    int count=0,k,l=0;
    printf("Enter the k value:");
    scanf("%d",&k);
    
}