#include <stdio.h>
double power(double x, int n) {
    double result = 1.0;
    long long p = n; 
    if (p < 0) {
        p = -p;
    }
    for (long long i = 0; i < p; i++) {
        result *= x;
    }
    if (n < 0) {
        return 1.0 / result;
    }
    return result;
}
int main() {
    double x;
    int n;
    printf("Enter base (x): ");
    scanf("%lf", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);
    printf("%.2lf^%d = %lf\n", x, n, power(x, n));
    return 0;
}