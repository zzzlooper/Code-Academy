#include <stdio.h>

float area_ellipse(float a, float b);
float area_circle(float r1, float r2);

#define PI 3.14159

int main(void){

        printf("%f\n", area_circle(1, 1));
        printf("%f\n", area_circle(1.5, 1.5));
        printf("%f\n", area_circle(13, 13));

        printf("\n%f\n", area_ellipse(1, 1));
        printf("%f\n", area_ellipse(1.5, 1.5));
        printf("%f\n", area_ellipse(13, 13));


        return 0;
}

float area_circle(float r1, float r2){
        float area = PI * r1 * r2;
        
        return area;
}

float area_ellipse(float a, float b){
        float area = PI * a * b;

        return area;
}
