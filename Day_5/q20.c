#include <stdio.h>
#include <math.h>
long long largestPrimeFactor(long long n) {
    long long max_prime = -1;
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    if (n > 2) {
        max_prime = n;
    }
    return max_prime;
}
int main() {
    long long number = 315;
    printf("Largest prime factor of %lld is %lld\n", number, largestPrimeFactor(number));
    return 0;
}