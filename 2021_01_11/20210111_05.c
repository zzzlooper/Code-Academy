#include <stdio.h>

int obarniBitNa(unsigned char x, unsigned char z);
        
int main(void){
        printf("%d\n",obarniBitNa(0x7f,7));
                 
        return 0;
}

int obarniBitNa(unsigned char x, unsigned char z){
        return x ^= (0x01 << z);
}
