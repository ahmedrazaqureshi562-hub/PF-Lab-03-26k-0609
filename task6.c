#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("Default precision: %f\n", num);
    printf("2 decimal places: %.2f\n", num);
    printf("4 decimal places: %.4f\n", num);
    printf("6 decimal places: %.6f\n", num);

    return 0;
}
