#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i=0,start=strlen(str),end;


    int len = strlen(str);
    char rev_str[len+1]; 

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        rev_str[j] = str[i];
    }
    rev_str[len] = '\0'; 

    printf("Reversed string: %s\n", rev_str);
/*TO print letters alternatively*/
    printf("\n");
    for(int i=0;i<strlen(str);i+=2)
    {
        printf("%c",str[i]);
    }   
    printf("\n");
    /*To print alternatively from the end*/
    for (int i = strlen(str); i >0; i-=2)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
