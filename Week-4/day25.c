#include <stdio.h>
int main()
{
    int arr[] = {100, 200, 300, 400, 500};
    int *p = arr;
    printf("Initial: Address = %p, Value = %d\n", p, *p);
    p++;
    printf("After p++: Address = %p, Value = %d\n", p, *p);
    p = p + 2;
    printf("After p+2: Address = %p, Value = %d\n", p, *p);
    p--;
    printf("After p--: Address = %p, Value = %d\n", p, *p);
    int *start = arr;
    int *end = &arr[4];
    printf("Difference (end - start) = %ld elements\n", end - start);
    return 0;
}

