#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int stations, position, destination;

    scanf("%d %d %d", &stations, &position, &destination);
    
    int distance1 = abs(destination - position);
    int distance2 = stations - position + destination;

    if (distance1 < distance2) {
        printf("%d\n", distance1);
    } else {
        printf("%d\n", distance2);
    }

    return 0;
}