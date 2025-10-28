long long v = 1;
int first = 1;
while (v < max) {
    if (!first) printf(" ");
    printf("%lld", v);
    first = 0;
    if (v > max / 2) break;  // overflow guard
    v *= 2;
}
printf("\n");
return 0;
