#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    // setlocale(0, "ru_RU");

    int count;

    scanf("%d", &count);


    if (count == 1) {
        printf("Мы нашли %d гриб в лесу\n", count);
    } else if (count >= 5) {
        printf("Мы нашли %d грибов в лесу\n", count);
    } else {
        printf("Мы нашли %d гриба в лесу\n", count);
    }
    

    return 0;
}