#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float min = -1;

    for (float x = 0; x <= 1; x += 0.00001) {
        float fx = pow(x, 4) + (2 * pow(x, 3)) - x - 1;
        if (fabs(fx) < fabs(min)) {
            min = fx;
        }
    }

    printf("%f\n", min);

    return 0;
}