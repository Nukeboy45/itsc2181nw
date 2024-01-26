#include <stdio.h>

// Written by Nathan Weisskopf
// ITSC 2181 - Spring 2024

int main() {
    char arr[13] = {'U','N','C',' ','C','h','a','r','l','o','t','t','e'};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<length; i++) {
        printf("%c\n", arr[i]);
    }

    return 0;
}