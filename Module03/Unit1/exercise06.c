#include <stdio.h>
#include <stdlib.h>

// Written by Nathan Weisskopf
// ITSC-2181 - Spring 2024

int main() {
    int inp = 0;
    int sum = 0;

    do {
        printf("Current sum: %d\n", sum);
        printf("Please enter the next number: ");
        scanf("%d", &inp);
        printf("\n");
        sum += inp;
    } while (inp != -1);

    return 0;
}