#include <stdio.h>
#include <math.h>

int main() {
    int pos;

    scanf("%d", &pos);

    int res = pos / 3 % 10;
    printf("%d", res);

}