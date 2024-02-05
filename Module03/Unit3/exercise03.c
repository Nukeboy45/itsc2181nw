#include <stdio.h>

struct box {
    int itemnum;
    char* color;
    int height;
    int width;
    int depth;
    float x;
    float y;
    float z;
};

int main() {
    struct box boxArr[100];

    boxArr[0].itemnum = 1;
    boxArr[0].color = "red";
    boxArr[0].height = 1;
    boxArr[0].width = 1;
    boxArr[0].depth = 1;
    boxArr[0].x = 0;
    boxArr[0].y = 0;
    boxArr[0].z = 0;

    boxArr[1].itemnum = 2;
    boxArr[1].color = "blue";
    boxArr[1].height = 2;
    boxArr[1].width = 2;
    boxArr[1].depth = 2;
    boxArr[1].x = 1;
    boxArr[1].y = 1;
    boxArr[1].z = 1;
}