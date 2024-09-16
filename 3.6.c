#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float result = 0;

    for (int i = 201; i >= 3; i-=2) {
        result = 1 / (result + i);
    }

    printf("%f\n", result);

    return 0;
}