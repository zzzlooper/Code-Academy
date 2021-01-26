#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main (void) {
        
        char str[] = "Hello there :)";
        reverse(str);
        
        return 0;
}

void reverse (char s[]) {
        
        char r[strlen(s)];
    
        for (size_t i = 0, j = strlen(s) - 1; i < strlen(s); i++, j--){
                r[i]=s[j];
                printf("%c", r[i]);
        }

        return;
}
