#include <stdio.h>

// Written by Nathan Weisskopf

int main() {
    int arr[12] = {1,0,3,0,0,0,7,0,0,0,0,0};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i=0; i<length; i++) {
        printf("%d\n", arr[i]);
    }

    int sum = 0;
    for (int i=0; i<length; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}