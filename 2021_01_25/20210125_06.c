#include <stdio.h>

int main (void) {

        char c;
        char nums;
        char let;        
        
        while ((c = getchar()) != EOF) {
                if (c >= 48 && c <= 57) {
                        nums++;
                        continue;
                } else if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
                        let++;                
        }

        printf("Numbers: %d\nLetter: %d\n", nums, let);

        return 0;
}
