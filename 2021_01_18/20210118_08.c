#include <stdio.h>

int isLetter(char c);

int main(void){

        char c = getchar();
        printf("%d", isLetter(c));

        return 0;
}

int isLetter(char c){
        
        c = ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 1 : 0;
        
        return c;                        
}
