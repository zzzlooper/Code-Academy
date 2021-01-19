#include <stdio.h>

int main(void){

        int iX = 13;
        int iY = 44;

        int iResult = 0;

        printf("%d - %d = %d\n", iX, iY, iResult);
        
        iResult = iY / iX;
        printf("%d / %d = %d\n", iY, iX, iResult);

        iResult = iY % iX;
        printf("%d / %d Remainder: %d\n", iY, iX, iResult);

        float x = 13.13;
        float y = 15.15;

        printf("%f * %f = %f\n", x, y, x * y);
        printf("%f + %f = %f\n", x, y, x + y);

        return 0;
}
