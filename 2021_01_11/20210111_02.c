#include <stdio.h>

int vzemiBitna(unsigned char x, unsigned char z);
        
int main(void){
        printf("%d\n",vzemiBitna(0xff,7));

        return 0;
}

int vzemiBitna(unsigned char x, unsigned char z){
        unsigned char c = 0x01;
        
        return (x >>= z) && (x &= c);
}
