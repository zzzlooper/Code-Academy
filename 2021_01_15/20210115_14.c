#include <stdio.h>

void test();
char x = 0;

int main(void){

        test();
        test();
        test();
        
        printf("%d", x);

        
        return 0;
}

void test(){
        x++;
        return;
}
