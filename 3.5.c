#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float sinx1 = M_PI / 10;
    float s = 0;

    for (int i = 1; i <= 10; i++) {
        s += sin((sinx1 / 2) * i) * sinx1;
    }

    printf("%f\n", s);

    return 0;
}