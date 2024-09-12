#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    // setlocale(0, "ru_RU");

    int xa1, ya1, xa2, ya2;
    int xb1, yb1, xb2, yb2;

    int xres1, yres1, xres2, yres2;

    scanf("%d%d%d%d", &xa1, &ya1, &xa2, &ya2);
    scanf("%d%d%d%d", &xb1, &yb1, &xb2, &yb2);

    // xres1 = xa1 < xb1 ? xa1 : xb1;
    // yres1 = ya1 < yb1 ? ya1 : yb1;
    // xres2 = xa2 > xb2 ? xa2 : xb2;
    // yres2 = ya2 > yb2 ? ya2 : yb2;

    if (xa1 < xb1) {
        xres1 = xa1;
    } else {
        xres1 = xb1;
    }

    if (ya1 < yb1) {
        yres1 = ya1;
    } else {
        yres1 = yb1;
    }

    if (xa2 > xb2) {
        xres2 = xa2;
    } else {
        xres2 = xb2;
    }
    
    if (ya2 > yb2) {
        yres2 = ya2;
    } else {
        yres2 = yb2;
    }
    
    printf("x1:%d y1:%d\n x2:%d y2:%d\n", xres1, yres1, xres2, yres2);

    return 0;
}