#include <stdio.h>

int turnOddBits(unsigned char x);
        
int main(void){
        printf("%d\n",turnOddBits(0xff));

        return 0;
}

int turnOddBits(unsigned char x){
        unsigned char mask = 0xaa;
        unsigned char mask1 = 0x55;
        
        return x % 2 != 0 ? (x ^= mask) : (x &= mask1);
}
