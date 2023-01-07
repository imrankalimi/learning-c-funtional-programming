#include "stdio.h"

//scanf take input from terminal

//void myInfo() {
//    char firstName[10];
//    printf("Enter your first name: ");
//    scanf("%s", firstName);
//    printf("Your first name is: %s", firstName);
//}
//
//int main() {
//    int num;
//    printf("%d\n", num);
//    scanf("%d", &num);
//    printf("The entered value is : %d", num);
//    myInfo();
//}

void getParisima(int length, int width) {
    int parisima = 3 * length * width;
    printf("The parisima is: %d\n", parisima );
}

void printMyName() {
    printf("Hello MY name is : Aamir Kalimi");
}

int main() {
    printMyName();
    int length, width;
    scanf("%d %d", &length, &width);
    getParisima(10, 20);
    printf("HElo");
}