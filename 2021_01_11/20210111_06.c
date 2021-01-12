#include <stdio.h>

int modifyBit(unsigned char x, unsigned char z);
        
int main(void){
        printf("%d\n",modifyBit(0x7f,7));
                 
        return 0;
}

int modifyBit(unsigned char x, unsigned char z){
        return  x==1 ? (x &= ~(0x01 << z)) : (x |= (0x01 << z));
}
