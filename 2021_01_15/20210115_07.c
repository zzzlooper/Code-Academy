#include <stdio.h>

int main(void){

        double x = 0xbb;
        printf("%f\n", x);
        
        signed long long z = 0xbbll;
        printf("%lld\n", z);
        
        unsigned long long c = 0xbbull;
        printf("%lld", c);

        return 0;
}
