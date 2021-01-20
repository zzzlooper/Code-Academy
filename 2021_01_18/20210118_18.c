#include <stdio.h>
#include <unistd.h>

int main(void){

        printf("\n");

        for (int i = 0; i <= 4; i++){
                for (int k = 1; k <= i; k++){
                        printf(" ");
                }
                sleep(1);
                printf("*\n");
        }
                

        return 0;
}
