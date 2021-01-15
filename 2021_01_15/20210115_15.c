#include <stdio.h>

void test();

int main(void){

        test();
        test();
        test();

        
        return 0;
}

void test(){
        static char x = 0;
        x++;
        printf("%d\n", x);
        
        return;
}
