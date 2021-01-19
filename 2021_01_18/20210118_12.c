#include <stdio.h>

int main(void) {
        
        int nX;
        scanf("%d", &nX);
        int nY = 20;
        if (nX == nY)
                printf("%d and %d are equal\n", nX, nY);
        else
                printf("%d and %d are not equal\n", nX, nY);

        
        if (nX > nY)
                printf("%d is greater than %d\n", nX, nY);

        printf("%d\n", nX >= nY ? 1 : 0);
        printf("%d\n", nX < nY ? 1 : 0);
        printf("%d\n", nX <= nY ? 1 : 0);
        printf("%d\n", nX != nY ? 1 : 0);
        
        return 0;        
} 
