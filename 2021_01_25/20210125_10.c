#include <stdio.h>
#include <string.h>

void reverse (char s[]);

int main (void) {
        
        int c;
        int i = 0; 
        char str[200];
    
        while ((c = getchar()) != EOF) {
                str[i] = c;
                i++;
                if (c == '\n')
                        reverse(str);
        }

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
