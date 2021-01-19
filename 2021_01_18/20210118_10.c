#include <stdio.h>

int main(void){

        int nResult = 15;
        int nX = 255;

        printf("Result = %d\n", nResult);
        
        nResult += nX;
        printf("Result += %d -> %d\n", nX, nResult);

        nResult = 1;
        nResult <<= nX;

        printf("Result <<= %d -> %d\n", nX, nResult);

        printf("Result >>= %d -> %d\n", nX, nResult >>= nX);
        printf("Result ^= %d -> %d\n", nX, nResult ^= nX);
        printf("Result &= %d -> %d\n", nX, nResult &= nX);
        printf("Result |= %d -> %d\n", nX, nResult |= nX);

        
        return 0;
}
