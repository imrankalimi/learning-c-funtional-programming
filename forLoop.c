#include "stdio.h"

int main() {
    // declaration
    int i = 0;
    while(i < 10) {
        printf("%d", i);
        i++;
    }
    int x = 0;
    do {
        printf("x : %d\n", x);
        x++;
    } while (x < 10);
}