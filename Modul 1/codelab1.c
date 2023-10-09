#include <stdio.h>

int main() {
    int a = 12, b = 28;
    float c = 2.5, d = 8.9;
    char e = 'R';

    float sum = a + (b * c) - d;
    printf("Bilangan a: %d\n", a);
    printf("Bilangan b: %d\n", b);
    printf("Bilangan c: %.2f\n", c);
    printf("Bilangan d: %.2f\n", d);
    printf("Karakter e: %c\n", e);
    printf("Hasil: %f\n", sum);

    return 0;
}