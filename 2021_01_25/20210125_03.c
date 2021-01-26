#include <stdio.h>

int main (void) {

        char c;
        c = getchar();
        int spaces = 0;
        int tabs = 0;
        int n_lines = 0;
        
        while ((c = getchar()) != EOF) {
                if (c == ' ')
                        spaces++;
                else if (c == '\t')
                        tabs++;
                else if (c == '\n')
                        n_lines++;
        }

        printf("Spaces: %d\nTabs: %d\nNew lines: %d\n", spaces, tabs, n_lines);

        return 0;
}
