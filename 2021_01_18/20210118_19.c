#include <stdio.h>

int main(void){

        unsigned char A = 1u;
        unsigned char B = 1u;

        printf("%d ", !(A && B) ? 1 : 0);
        printf("%d ", !A || !B ? 1 : 0);

        printf("%d ", !(A || B) ? 1 : 0);
        printf("%d ", !A && !B ? 1 : 0);

        B = 0u;
        printf("\n");

        printf("%d ", !(A && B) ? 1 : 0);
        printf("%d ", !A || !B ? 1 : 0);

        printf("%d ", !(A || B) ? 1 : 0);
        printf("%d ", !A && !B ? 1 : 0);

        A = 0u;
        printf("\n");
        
        printf("%d ", !(A && B) ? 1 : 0);
        printf("%d ", !A || !B ? 1 : 0);

        printf("%d ", !(A || B) ? 1 : 0);
        printf("%d ", !A && !B ? 1 : 0);
        
        return 0;
}
