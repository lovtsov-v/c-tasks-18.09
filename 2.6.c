#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int horse_x, horse_y;
    int queen_x, queen_y;
    int target_x, target_y;

    scanf("%d%d", &horse_x, &horse_y);
    scanf("%d%d", &queen_x, &queen_y);
    scanf("%d%d", &target_x, &target_y);

    int dtarget_x = abs(target_x - horse_x);
    int dtarget_y = abs(target_y - horse_y);

    if (dtarget_x * dtarget_y != 2) {
        printf("Cant move horse on target position\n");
        return 1;
    }

    int dfigures_x = abs(target_x - queen_x);
    int dfigures_y = abs(target_y - queen_y);

    if (dfigures_x == dfigures_y || dfigures_x == 0 || dfigures_y == 0) {
        printf("Queen will win\n");
    } else {
        printf("Queen won't win\n");
    }

    return 0;
}