#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int result = pow(20, 2);

    for (int i = 19; i > 0; i--) {
        result -= pow(i, 2);
    }

    printf("%d\n", result);

    return 0;
}