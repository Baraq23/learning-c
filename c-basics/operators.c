#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int f = a / b;
    int g = a % b;

    printf("a + b = %d\n", c);
    printf("a - b = %d\n", d);
    printf("a * b = %d\n", e);
    printf("a / b = %d\n", f);
    printf("a %% b = %d\n", g);

    return 0;

}