#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double PI = M_PI;

    double angle;

    scanf("%lf", &angle);

    angle -= PI / 2;

    double hour_pos = ((2 * PI - angle) / (PI / 6));
    int hours = (int)((2 * PI - angle) / (PI / 6)) % 12;
    double minute_pos_by_hour = hour_pos - (int)hour_pos;
    int minutes = (int)(60 * minute_pos_by_hour);

    double minute_pos = (((2 * PI) * minute_pos_by_hour) * -1) + (2 * PI) + (PI / 2);

    printf("%d : ", hours);
    printf("%d \n", minutes);
    printf("%lf \n", minute_pos);

    return 0;
}