#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int h = 0;
    float p = 1;

    while (p >= 1) {
        p = 1.29 * expf(-h*(1.25*pow(10, -4)));
        h++;
    }
    printf("%d\n", h);

    return 0;
}