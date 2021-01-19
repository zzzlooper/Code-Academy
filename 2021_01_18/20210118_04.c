#include <stdio.h>

int main(void){

        int x = 10;
        int y = 10;

        int true = x && y & x << 1;
        /* <<, &, &&, =  in this order */
        printf("%d\n", true);
        
        true = x && y ^ x << 1;
        /* <<, ^, &&, =  in this order */
        printf("%d", true);

        
        return 0;
}
