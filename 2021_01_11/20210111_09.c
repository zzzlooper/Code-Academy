#include <stdio.h>

int clear4Bits(unsigned char x);
        
int main(void){
        printf("%d\n",clear4Bits(0xff));

        return 0;
}

int clear4Bits(unsigned char x){
        unsigned char mask = 0x0f;

        return x &= mask;
}
