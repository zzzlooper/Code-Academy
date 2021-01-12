#include <stdio.h>

int vdigniBitNa(unsigned char x, unsigned char z);
        
int main(void){
        printf("%d\n",vdigniBitNa(0x7f,7));
                 
        return 0;
}

int vdigniBitNa(unsigned char x, unsigned char z){
        return x |= (0x01 << z);
}
