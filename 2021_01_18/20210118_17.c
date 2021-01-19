#include <stdio.h>

int main(void){

        int A = 1;

        for (int i = 1; i <= 10; i++){
                A ^= A << 13;
                A ^= A >> 17;
                A ^= A << 5;
                printf("%d\n", A);
        }

        printf("\n");
        
        long long int A_long = 1000000000000ll;

        for (int i = 1; i <= 10; i++){
                A_long ^= A_long << 13;
                A_long ^= A_long >> 17;
                A_long ^= A_long << 5;
                printf("%lld\n", A_long);
        }


        return 0;
}
