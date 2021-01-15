#include <stdio.h>

float area_circle(float r1, float r2);
#define PI 3.14159

int main(void){

        printf("%f\n", area_circle(1, 1));
        printf("%f\n", area_circle(1.5, 1.5));
        printf("%f", area_circle(13, 13));
        

        return 0;
}

float area_circle(float r1, float r2){
        float area = PI * r1 * r2;
        
        return area;
}
