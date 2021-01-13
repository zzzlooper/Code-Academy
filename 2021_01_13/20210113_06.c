#include <stdio.h>

int main(void){
        
        char a = -127;
        unsigned char b = 255u;
        unsigned int c = 6237498u;
        unsigned long int d = 4294967292ul;
        unsigned long long int e = 9000000000000775845ull;
        
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);
        printf("%ld\n", d);
        printf("%lld\n", e);
        
        return 0;
}
