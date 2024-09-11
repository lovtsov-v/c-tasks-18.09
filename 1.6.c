#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//DIDNT FINISHED

int main() {
    double PI = M_PI;

    int hours, minutes;

    scanf("%d %d", &hours, &minutes);

    double hour_pos = ((PI / 6) * hours);
    double minute_pos = ((PI / 30) * minutes);
    double dpos = fabs(hour_pos - minute_pos);

    double tt = dpos / (PI / 2);
    double full = ceil(tt);
    double dres = (full - tt) * (PI / 2);
    double dminutes = dres / (PI / 30);

    
    printf("%lf \n", dminutes);

    return 0;
}