#include <stdio.h>

int main() {
    int numa3, numa2, numa1;
    int numb3, numb2, numb1;

    scanf("%d%d%d", &numa3, &numa2, &numa1);
    scanf("%d%d%d", &numb3, &numb2, &numb1);

    int num_res3, num_res2, num_res1;

    num_res1 = (int)(numa1 + numb1);
    num_res2 = (int)(numa2 + numb2) + (int)(num_res1 / 10);
    num_res3 = (int)(numa3 + numb3) + (int)(num_res2 / 10);

    printf("%d%d%d", num_res3 % 10, num_res2 % 10, num_res1 % 10);

    return 0;
}