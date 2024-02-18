#include <stdio.h>

int main() {
    int a, b, *ap, *bp; 
    char c, d, *cp, *dp; 
    float f, g, *fp, *gp;

    //ap = &c;
    *ap = 3333;
    //c = ap;
    b = *ap;
    printf("%d", &b);
    return 0;
}