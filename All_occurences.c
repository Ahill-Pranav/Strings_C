#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],character;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the elelment to be searched for:");
    scanf(" %c",&character);
    str[strcspn(str, "\n")] = 0;
    int indices[sizeof(str)],j=0;
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]==character)
        {
            indices[j]=i;
            j++;
        }
    }
    printf("The character %c occurs at:");
    int i=0;
    for (;i<j-1;i++)
    {
        printf("%d,",indices[i]);
    }
    printf("%d",indices[i]);
}