#include<stdio.h>
#include<string.h>

int main() {
    char str[100], target[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  

    printf("Enter the target string: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = 0;  

    int index = 0, found = 0;

    while (str[index] != '\0') {
        if (str[index] == target[0]) {
            int i = 0;
            found = 1;
            while (target[i] != '\0') {
                if (str[index + i] != target[i]) {
                    found = 0;
                    break;
                }
                i++;
            }
            if (found) {
                break;
            }
        }
        index++;
    }

    if (found) {
        printf("Found at index %d\n", index);
    } else {
        printf("Target string not found\n");
    }

    return 0;
}
