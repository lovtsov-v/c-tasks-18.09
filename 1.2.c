#include <stdio.h>

int main() {
    int input1, input2;

    scanf("%d %d", &input1, &input2);

    /*  1ч   2ч
     *   1   9
     *   10  9
     *   10  1
     *   9   1
     */

    input1 += input2;
    input2 = input1 - input2;
    input1 -= input2;


    printf("%d\n", input1);
    printf("%d", input2);

    return 0;
}