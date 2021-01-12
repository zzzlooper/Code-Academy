#include <stdio.h>

int dividedBits(unsigned char x);
        
int main(void){
        printf("%d\n",dividedBits(0x0f));

        return 0;
}

int dividedBits(unsigned char x){
        unsigned char mask = 0x49; // 01001001
        
        return x |= mask; 
}
