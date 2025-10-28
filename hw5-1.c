/* hw5-1.c
   Print all powers of 2 strictly less than max, space-separated. */
#include <stdio.h>

int main(void) {
    long long max;
    if (scanf("%lld", &max) != 1) return 0;

    long long v = 1;
    int first = 1;
    while (v < max) {
        if (!first) printf(" ");
        printf("%lld", v);
        first = 0;
        if (v > max / 2) break;  // avoid overflow, though not needed for tests
        v *= 2;
    }
    printf("\n");
    return 0;
}
