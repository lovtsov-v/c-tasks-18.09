#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x;
    int n;
    int sign = -1; // -1 -> -; 1 -> +;

    scanf("%f %d", &x, &n);
    
    float result = 1;

    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        result += (pow(x, i) / factorial) * sign;
        sign *= -1;
    }

    printf("%f\n", result);

    return 0;
}