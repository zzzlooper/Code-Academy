#include <stdio.h>

void print_bin(char c);

int main(void){

        unsigned char x = 255u;
        unsigned char z = 10u;
        unsigned char res = x + z;
        
        print_bin(res);

        return 0;
}

void print_bin(char c) {
	unsigned char mask;
	
	for (mask = 0x80u; mask; mask >>= 1)
		printf("%d", !!(c & mask));
	printf("\n");
        
	return;
}
