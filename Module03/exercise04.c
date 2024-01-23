#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf
// ITSC-2181 - Spring 2024

int main() {
    printf("For-loop\n");
    for (int i=0; i<10; i++) {
        printf("x=%d\n", i);
    }
    printf("While loop\n");
    int i = 0;
    while (i < 10) {
        printf("x=%d\n", i);
        i++;
    }
    i = 0;
    printf("Do-while loop\n");
    do {
        printf("x=%d\n", i);
        i++;
    } while (i < 10);

    return 0;
}