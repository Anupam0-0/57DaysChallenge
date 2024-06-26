#include <stdio.h>
long gcd(long, long);

int main() {
    long x, y, hcf, lcm;
    printf("\nEnter two integers :");
    scanf("%ld%ld", &x, &y);
    hcf = gcd(x, y);
    lcm = (x*y)/hcf;
    printf("Greatest common divisor of %ld and %ld = %ld\n", x, y, hcf);
    printf("Least common multiple of %ld and %ld = %ld\n", x, y, lcm);
    printf("\n");
}

long gcd(long a, long b) {
    if (b == 0)
        return a;
    else
    return gcd(b, a % b);
}