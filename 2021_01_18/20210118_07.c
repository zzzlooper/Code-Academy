#include <stdio.h>

int main(void){

        int nA = 1;
        int nB = (nA == 1 ? 2 : 0);

        scanf("%d", &nA); // a)

        printf("A value is %d\n", nA);
        printf("B value is %d\n", nB);

        nA > nB ? printf("Max: %d", nA) : printf("Max: %d", nB); // b)

        return 0;
}
