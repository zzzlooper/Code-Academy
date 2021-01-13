#include <stdio.h>

int main(void){
        
        float tomato = 4.5;
        float flour = 1.80;
        float yogurt = 0.50;
        float icecream = 0.60;
        float candy = 1.50;
        float lollipop = 0.15;

        printf("Hello, welcome to our shop! Today we offer - fresh tomatoes, flour, yogurt, icecream and lollipops.\n");
        printf("How much tomatoes kilograms do you want?\n");
        
        float weight;
        scanf("%f", &weight);
        float totalWeight;
        totalWeight = tomato * weight;
        printf("Price: %.2flv\n", totalWeight);

        printf("How much lollipops do you want?\n");
        scanf("%f", &weight);
        totalWeight = lollipop * weight;
        printf("Price: %.2flv\n", totalWeight);
        
        return 0;
}
