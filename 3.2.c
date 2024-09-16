#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int number;
    int result = 0;

    scanf("%d", &number);

    for (int i = 4; i >= 0; i--) {
        result += (number % 10) * pow(10, i);
        number /= 10;
    }

    printf("%d\n", result);
    

    return 0;
}