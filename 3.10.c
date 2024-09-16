#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n;
    float result = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float jresult = 1;
        for (int j = i; j <= 2*n; j++) {

            int factorial = 1;

            for (int factn = 1; factn <= (j - i + 1); factn++) {
                factorial *= factn;
            }

            jresult *= (pow(-1, i) * (j + 1)) / factorial;
        }
        result += jresult;
    }

    printf("%f\n", result);

    return 0;
}