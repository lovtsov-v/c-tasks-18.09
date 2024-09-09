#include <stdio.h>

int main() {
    double inputn;

    scanf("%lf", &inputn);

    double n2 = inputn * inputn;
    double n4 = n2 * n2;
    double n7 = n4 * n2 * inputn;
    double n14 = n7 * n7;
    double n28 = n14 * n14;


    printf("%lf", n28);

    return 0;
}
//2
//268435456