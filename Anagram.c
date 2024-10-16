#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[] = "astronomer";
    char t[] = "moonstarer";
    char m[strlen(s)+1];
    int l = 0;
    
    memset(m, '\0', strlen(s) + 1);
    
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
    bool valid = true;
    
    for (int i = 0; i < strlen(s); i++) {
    	for (int j = 0; j < strlen(alphabets); j++) {
    		if (s[i] != alphabets[j]) {
    			valid = false;
    			break;
			}
		}
		if (valid == false) {
			break;
		}
	}
    
    if (strlen(s) == strlen(t) && valid == true) {
        for (int i = 0; i < strlen(s); i++) {
            for (int j = 0; j < strlen(t); j++) {
                if(s[i] == t[j]) {
                    m[l] = t[j];
                    l++;
                    break;
                }
            }
        }
        if (strcmp(s, m) == 0) {
        	printf("True");
		}
		else {
			printf("False");
		}
    }
    else {
        printf("Invalid Character in First string");
    }
    
    m[l] = '\0';
    
    return 0;
}