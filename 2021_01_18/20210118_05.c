#include <stdio.h>

int main(void){

        /* , operator - from left to right */
        
        int x = 1, y = 0;
        int z = y || x;

        printf("%d", z);
        
        printf("\nInit values:\nX=%d, Y=%d\n", x, y);
        /* right hand of comma expression has no effect */
        x = 1 + 2.2 * 3.3 + 4;
        y = (7 * 8.8 + 9.9 - 4);

        printf("\nX=%d, Y=%d\n", x, y);

        return 0;
}
