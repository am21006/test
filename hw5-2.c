#include <stdio.h>

int main(void) {
    long long max;
    if (scanf("%lld", &max) != 1) return 0;

    int first = 1;
    for (long long i = 1; i <= max; ++i) {
        if (max % i == 0) {
            if (!first) printf(" ");
            printf("%lld", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}

