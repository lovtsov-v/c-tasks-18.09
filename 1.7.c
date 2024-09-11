#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numa, numb;

    scanf("%d %d", &numa, &numb);

    // int numa_reduced = 

    double divide_res1 = (double)numa / numb;
    double divide_res2 = (double)numb / numa;

    double res1 = (floor(divide_res1) / divide_res1); // 6 / 6 => 1 || 6 / 6.6 < 1
    double res2 = (floor(divide_res2) / divide_res2); // 0 / 0.3 => 0
    int res = abs(res1 - res2); // must be 1

    printf("%d\n", res);

    return 0;
}