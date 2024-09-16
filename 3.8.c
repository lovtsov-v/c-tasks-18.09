#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_operation_result(float num1, float num2, int sign) {
    switch (sign) {
        case 1:
            return num1 + num2;
        case 2:
            return num1 - num2;
        case 3:
            return num1 * num2;
        case 4:
            return num1 / num2;
        default:
            return 0;
    }
}

int main() {
    
    for (int s1 = 1; s1 <= 4; s1++) {
        float op1 = get_operation_result(1, 2, s1);

        for (int s2 = 1; s2 <= 4; s2++) {
            float op2 = get_operation_result(op1, 3, s2);

            for (int s3 = 1; s3 <= 4; s3++) {
                float op3 = get_operation_result(op2, 4, s3);

                for (int s4 = 1; s4 <= 4; s4++) {
                    float op4 = get_operation_result(op3, 5, s4);
                    
                    if (op4 == 25) {
                        
                        printf("%d %d %d %d\n", s1, s2, s3, s4);
                    }
                }
            }
        }
    }
    

    return 0;
}