#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf
// ITSC-2181 - Spring 2024

int main() {
    printf("Ascending even number, solution 1\n");
    for (int i = 0; i < 22; i+=2) {
        printf("%d\n", i);
    }

    printf("Ascending even number, solution 2\n");
    for (int i = 0; i < 21; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    printf("Descending odd number, solution 1\n");
    for (int i = 49; i > 0; i-=2) {
        printf("%d\n", i);
    }

    printf("Descending odd number, solution 2\n");
    for (int i = 50; i > 0; i--) {
        if (!(i % 2 == 0)) {
            printf("%d\n", i);
        }
    }

    return 0;
}