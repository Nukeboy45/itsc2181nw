#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct binary {
    int size;
    int * value;
};

struct binary toBinary(int value) {
    struct binary newBinaryValue; 
    int size = 0;
    while (value >= (int)pow(2, size)) {
        size++;
    }
    int* binaryValue = (int*)malloc((size + 1) * sizeof(int));

    if (binaryValue == NULL) {
        newBinaryValue.size = size;
        newBinaryValue.value = NULL;
        return newBinaryValue;
    }

    newBinaryValue.size = size;

    for (int i=0; i < size; i++) {
        int exponent = size - i - 1;
        int position = (int)pow(2, exponent);
        if (position <= value) {
            binaryValue[i] = 1;
            value -= position;
        } else {
            binaryValue[i] = 0;
        }
        printf("%d", binaryValue[i]);
    }
    printf("\n");

    newBinaryValue.value = binaryValue;
    return newBinaryValue;
}

void equalizeLength (struct binary* binary1, struct binary* binary2) {

    if (binary1->size > binary2->size) {
        int dif = binary1->size - binary2->size;
        int* resizeArr = (int*)malloc(binary1->size * sizeof(int));
        for (int i=0; i < binary1->size; i++) {
            if (i-dif < 0) {
                resizeArr[i] = 0;
            } else {
                resizeArr[i] = binary2->value[i - dif];
            }
        }
        binary2->value = resizeArr;
        binary2->size = binary1->size;
    } else if (binary1->size < binary2->size) {
        int dif = binary2->size - binary1->size;
        int* resizeArr = (int*)malloc(binary2->size * sizeof(int));
        for (int i=0; i < binary2->size; i++) {
            if (i-dif < 0) {
                resizeArr[i] = 0;
            } else {
                resizeArr[i] = binary1->value[i - dif];
            }
        }
        binary1->value = resizeArr;
        binary1->size = binary2->size;
    } else {
        printf("Sizes are equal!\n");
    }
    printf("\n");
}

void printBinary(struct binary binaryVal) {
    for (int i=0; i < binaryVal.size; i++) {
        printf("%d", binaryVal.value[i]);
    }
    printf("\n");
}

void bwAND(struct binary binary1, struct binary binary2) {
    printf("Bitwise AND: \n");
    for (int i=0; i < binary1.size; i++) {
        if (binary1.value[i] == binary2.value[i]) {
            printf("%d", binary1.value[i]);
        } else {
            printf("%d", 0);
        }
    }
    printf("\n");
}

void bwOR(struct binary binary1, struct binary binary2) {
    printf("Bitwise OR: \n");
    for (int i=0; i < binary1.size; i++) {
        if (binary1.value[i] == 1 || binary2.value[i] == 1) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }
    }
    printf("\n");
}

void bwXOR(struct binary binary1, struct binary binary2) {
    printf("Bitwise XOR: \n");
    for (int i=0; i < binary1.size; i++) {
        if (binary1.value[i] != binary2.value[i]) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }
    }
    printf("\n");
}

int main() {
    int input1;
    int input2;
    printf("Enter a decimal value:\n");
    scanf("%d", &input1);
    printf("Enter a decimal value:\n");
    scanf("%d", &input2);
    struct binary input1Binary = toBinary(input1);
    if (input1Binary.value == NULL) {
        printf("Failed");
        return 1;
    }
    struct binary input2Binary = toBinary(input2);
    if (input2Binary.value == NULL) {
        printf("Failed");
        return 1;
    }
    printf("0x%X\n", input1);
    printf("0x%X\n", input2);

    equalizeLength(&input1Binary, &input2Binary);

    printBinary(input1Binary);
    printBinary(input2Binary);

    bwAND(input1Binary, input2Binary);
    bwOR(input1Binary, input2Binary);
    bwXOR(input1Binary, input2Binary);

    return 0;
}