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

struct box compareVolume(struct box box1, struct box box2);

int main() {
    struct box newBox1;
    newBox1.itemnum = 3;
    newBox1.color = "red";
    newBox1.height = 3;
    newBox1.width = 2;
    newBox1.depth = 5;
    newBox1.x, newBox1.y, newBox1.z = 10.21, 20.62, 35.72;

    struct box newBox2;
    newBox2.itemnum = 4;
    newBox2.color = "blue";
    newBox2.height = 4;
    newBox2.width = 5;
    newBox2.depth = 3;
    newBox1.x, newBox1.y, newBox1.z = 2.00, 5.0, 10.0;
    
    struct box greaterBox = compareVolume(newBox1, newBox2);
    greaterBox.color = "green";
    greaterBox.x, greaterBox.y, greaterBox.z = 0.0, 0.0, 0.0;
    printf("Item: %d, Color: %s, Position: (%f, %f, %f)\n"
        "Height: %d, Width: %d, Depth: %d", greaterBox.itemnum,
        greaterBox.color, greaterBox.x, greaterBox.y, greaterBox.z, greaterBox.height,
        greaterBox.width, greaterBox.depth);

}

struct box compareVolume(struct box box1, struct box box2)
{
    int box1Volume = box1.height * box1.depth * box1.width;
    int box2Volume = box2.height * box2.depth * box2.width;

    if (box1Volume > box2Volume) 
    {
        return box1;
    } else if (box2Volume > box1Volume) {
        return box2;
    } else {
        // If boxes are equal, return the second box
        return box2;
    }
}