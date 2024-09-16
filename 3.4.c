#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float result = 0;

    for (int i = 50; i > 0; i--) {
        result = sqrt(result + i);
    }

    printf("%f\n", result);

    return 0;
}