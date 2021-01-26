#include <stdio.h>

int main (void) {
        
        char c;
        
        while ((c = getchar()) != EOF) {
                if (c == '\t' || c == ' ')
                        continue;
                putchar(c);
        }
        
        return 0;
}
