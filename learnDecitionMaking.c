#include "stdio.h"

int main() {
    int num;
    printf("Please provide a number: ");
    scanf("%d", &num); //10
    /*
     * 10 => I am 10
     * 20 => I am 20
     * 30 => I am 30
     */
    switch (num) {
        case 10:
            printf("I am 10");
            break;
        case 20:
            printf("I am 20");
            break;
        case 30:
            printf("I am 30");
            break;
        default:
            printf("I am %d", num);
    }
    int price;
    scanf("%d", &price);
    if(!price<0) {

    }

}