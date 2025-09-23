#include <stdio.h>

int main() {
    int a = 100;
    float b = 3.14;
    char c = 'Z';
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    printf("Variable a: Value = %d, Address = %p\n", a, &a);
    printf("Pointer p1: Stores = %p, Dereferenced = %d\n\n", p1, *p1);
    printf("Variable b: Value = %.2f, Address = %p\n", b, &b);
    printf("Pointer p2: Stores = %p, Dereferenced = %.2f\n\n", p2, *p2);
    printf("Variable c: Value = %c, Address = %p\n", c, &c);
    printf("Pointer p3: Stores = %p, Dereferenced = %c\n", p3, *p3);
    return 0;
}

