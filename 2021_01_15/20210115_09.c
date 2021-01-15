#include <stdio.h>

int main(void){

        char s[] = "Hi";

        int i;
        for (i = 0; s[i] != '\0'; i++)
                printf("%c", s[i]);
        
        printf("\n%d", i);

        return 0;
}
