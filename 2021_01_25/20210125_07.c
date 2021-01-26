#include <stdio.h>

int main (void) {
        
        int c;
        int i = 0; 
        char str[200];
    
        while ((c = getchar()) != EOF) {
                str[i] = c;
                i++;
                if (i > 80)
                        printf("%s\n", str);                
        }

        return 0;
}
