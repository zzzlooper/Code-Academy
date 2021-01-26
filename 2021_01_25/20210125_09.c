#include <stdio.h>

int main (void) {
        
        char c;
        
        while ((c = getchar()) != EOF) {
                if (c >= 65 && c <= 90)
                        c += 32;
                putchar(c);
        }
        
        return 0;
}
