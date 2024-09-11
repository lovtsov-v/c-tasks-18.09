#include <stdio.h>

int main() {
    int pos;

    scanf("%d", &pos);

    int res = pos / 3 % 10; // NUMS multiplies of 3

    printf("%d", res);

    return 0;
}