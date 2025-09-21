#include <stdio.h>
void changeValue(int *p)
{
    *p = *p + 50;
}
int main() {
    int a = 10;
    int *ptr = &a;
    printf("Before change:\n");
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Pointer ptr holds = %p\n", ptr);
    printf("Value at address ptr = %d\n\n", *ptr);
    changeValue(ptr);
    printf("After change (via pointer function):\n");
    printf("Value of a = %d\n", a);
    printf("Value at address ptr = %d\n", *ptr);
    return 0;
}

