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
    struct box newBox;
    newBox.itemnum = 3;
    newBox.color = "red";
    newBox.height = 3;
    newBox.width = 2;
    newBox.depth = 5;
    newBox.x, newBox.y, newBox.z = 10.21, 20.62, 35.72;
    printf("Item: %d, Color: %s, Position: (%f, %f, %f)\n"
        "Height: %d, Width: %d, Depth: %d", newBox.itemnum,
        newBox.color, newBox.x, newBox.y, newBox.z, newBox.height,
        newBox.width, newBox.depth);
    return 0;
}