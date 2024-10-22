#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]=0;
    int rotations;
    printf("Enter the amount of rotations:");
    scanf("%d",&rotations);
    getchar();
    if(rotations>strlen(str))
    {
        rotations%=strlen(str);
    }
    else if(rotations==strlen(str))
    {
        printf("%s",str);
    }
    else
    {
        for (int i=rotations;i<strlen(str);i++)
        {
            printf("%c",str[i]);
        }
        for (int i=0;i<rotations;i++)
        {
            printf("%c",str[i]);
        }
    }
    /*Another type of rotation*/
    printf("\nAnother side rotation\n");
      for (int i=strlen(str)-rotations;i<strlen(str);i++)
        {
            printf("%c",str[i]);
        }
        for (int i=0;i<strlen(str)-rotations;i++)
        {
            printf("%c",str[i]);
        }
    
}