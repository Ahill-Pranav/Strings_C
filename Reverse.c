#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets if it exists
    str[strcspn(str, "\n")] = '\0';

    // Calculate the length of the input string
    int len = strlen(str);
    char rev_str[len+1]; 

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        rev_str[j] = str[i];
    }
    rev_str[len] = '\0'; 

    printf("Reversed string: %s\n", rev_str);
    
    return 0;
}
