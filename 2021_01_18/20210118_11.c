#include <stdio.h>

int main(void){

        int iCounter = 0;
        
        while (++iCounter < 3){
                printf("Counter %d\n", ++iCounter);
                printf("++ Counter: %d\n", ++iCounter);
                printf("-- Counter: %d\n", --iCounter);
                printf("Counter ++: %d\n", iCounter++);
                printf("Counter --: %d\n", iCounter--);
        }

        /* it won't happen anything because of while < 3 */
        
        return 0;
}
