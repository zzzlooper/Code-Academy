#include <stdio.h>

extern unsigned char x;

int main(void){

        printf("%d\n", x);

        return 0;
}

unsigned char x = 0xffu;
