#include <stdio.h>

int main(void){

        printf("Character literals: '%c','%c','%c'\n", '\041', '\x3a', 'Z');
        printf("Integer literals: %d, %d, %lld \n", 123, 0xFFF, 12345678901234ull);
        printf("Float-point literals: %lf, %lf, %lg %lg\n", 1.23, 1234.5678, 123e-12, 123e+28);
        printf("String literals: \"%s\", \"%s\", \"%s\" \n", "xxx", "zzz", "yyy");
        
        return 0;
}
