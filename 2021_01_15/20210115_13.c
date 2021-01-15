#include <stdio.h>

int main(void){

        char str[] = "Hello";

        for (int i = 1; str[i] != '\0'; i++)
                str[i] -= 32;

        printf("%s", str);


        return 0;
}
