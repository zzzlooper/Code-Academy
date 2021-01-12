#include <stdio.h>

int clearEvenBits(unsigned char x);
        
int main(void){
        printf("%d\n",clearEvenBits(0xff));

        return 0;
}

int clearEvenBits(unsigned char x){
        unsigned char mask = 0x55;

        return x &= mask;
}
