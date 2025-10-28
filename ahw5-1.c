#include <stdio.h>

int main(void) {
    long long n, m;
    if (scanf("%lld %lld", &n, &m) != 2) return 0;

    if (m < n) {
        printf("Cannot transform %lld to %lld\n", n, m);
        return 0;
    }

    long long steps = 0;
    long long x = m;
    while (x > n) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x -= 1;
        }
        steps++;
    }

    if (x == n) {
        printf("Numbers of steps taken: %lld\n", steps);
    } else {
        /* This branch won't occur with allowed ops, but keep for completeness. */
        printf("Cannot transform %lld to %lld\n", n, m);
    }
    return 0;
}
