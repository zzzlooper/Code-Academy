#include <stdio.h>

int clearNBits(unsigned char x, unsigned char bits);
        
int main(void){
        printf("%d\n",clearNBits(0x5f, 0x0f));

        return 0;
}

int clearNBits(unsigned char x, unsigned char bits){
        return x &= ~bits;
}
