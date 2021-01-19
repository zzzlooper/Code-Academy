#include <stdio.h>
#include <unistd.h>

int main(void){

        printf("\n");

        for (int i = 0; i <= 4; i++){
                for (int k = 1; k <= i; k++){
                        sleep(1);
                        printf(" ");
                }
                printf("*\n");
        }
                

        return 0;
}
