#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    for(i = start; i <= end; i++) {
        if(i < 2)
            continue;

        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            printf("First prime in range = %d\n", i);
            break;
        }
    }

    if(i > end)
        printf("No prime number found in the range.\n");

    return 0;
}
