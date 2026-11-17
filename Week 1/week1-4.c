#include <stdio.h>


void calculate(double diameter, double *omtrek) {
    double dikkeomtrek = diameter * 3.14159;
    *omtrek = dikkeomtrek;
}

int main(void) {
    double omtrek = 0.0;
    calculate(8.9, &omtrek);
    printf("%f\n", omtrek);
    return 0;
}
