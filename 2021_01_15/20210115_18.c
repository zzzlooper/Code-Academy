#include <stdio.h>

int main(void){
        
        double caravan = 90;
        double camper = 100;

        double own;

        char rez;

        do{
                printf("Welcome to Caravans & Campers for rent!\n\n");
                printf("If you want a caravan, please press 1.\n");
                printf("If you want a camper, please press  2.\n");
                printf("Press 3 for exit.\n");
                printf("Press 4 for more options.\n");
                scanf("%c", &rez);

                switch (rez){
                case '1':
                        printf("Great you pick caravan :)\n");
                        printf("Price for 1 day is %.2flv.\n", caravan);
                        printf("Price owned: %.2flv\n", own=caravan);
                        break;
                case '2':
                        printf("Great you pick camper :)\n");
                        printf("Price for 1 day is %.2flv.\n", camper);
                        printf("Price owned: %.2flv\n", own=camper);
                        break;
                case '3':
                        printf("Goodbye :)\n");
                        break;
                case '4':
                        printf("More options for now are not available.\
                               \nHave a nice day!\n");
                        break;                        
                default:
                        printf("Invalid input.\n");
                        break;
                }
        } while (rez == 3);



        return 0;
}
