#include <stdio.h>
#include <string.h>

int main(void){

        char str[] = "Hello";
        char rts[20];
        strcpy(rts, str);
        int len = strlen(rts);
        int i;

        printf("%s\n", str);
        
        for(i = len - 1; i >= 0; i--)
                printf("%c", rts[i]);

        
        return 0;
}
