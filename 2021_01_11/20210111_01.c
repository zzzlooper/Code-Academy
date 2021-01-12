#include <stdio.h>

int main(void){
        unsigned int x = 3;
        unsigned int z = 5;

        printf("%d\n", x&z);
        printf("%d\n", x|z);
        printf("%d", x^z);
        
        return 0;
}
