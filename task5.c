#include <stdio.h>

int main() {
    int a = 10;
    unsigned int b = 20;
    float c = 10.5;
    double d = 20.75;
    char e = 'A';

    printf("Integer: %d\n", a);
    printf("Unsigned Integer: %u\n", b);
    printf("Float: %f\n", c);
    printf("Double: %lf\n", d);
    printf("Character: %c\n", e);

    printf("Octal: %o\n", a);
    printf("Hexadecimal: %x\n", a);
    printf("Hexadecimal Uppercase: %X\n", a);

    return 0;
}
