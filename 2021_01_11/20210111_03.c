#include <stdio.h>

int iz4istiBitna(unsigned char x, unsigned char z);
        
int main(void){
        printf("%d\n",iz4istiBitna(0xff,7));
                 
        return 0;
}

int iz4istiBitna(unsigned char x, unsigned char z){
        return x &= ~(0x01 << z);
}
