#include <stdio.h>

int main(void){
        
        float a = 4.9876543;
        long double b = 7.12345678901234567890;
        long double c = 18398458438583853.28;
        long double d = 18398458438583853.39875937284928422;
       
        printf("%f\n", a);
        printf("%Le\n", b);
        printf("%Lf\n", c);
        printf("%Lf\n", d);


        return 0;
}
