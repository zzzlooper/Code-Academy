#include <stdio.h>

int main (void) {

        char c;
        int z = 1;
        
        while ((c = getchar()) != EOF) {
                if (c == ' ' || c == '\t'){
                        if (z == 1 && (c == ' ' || c == '\t'))
                                continue;                        
                        z = 1;
                }
                else
                        z = 0;
                
                putchar(c);

                if (c == '(')
                        putchar(')');
        }


        return 0;
}
