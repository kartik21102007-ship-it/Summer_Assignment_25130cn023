#include <stdio.h>
int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    rev = (rev * 10) + (n % 10);
    return reverseNumber(n / 10, rev);
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int isNegative = (num < 0) ? 1 : 0;
    int temp = (num < 0) ? -num : num;
    int reversed = reverseNumber(temp, 0);
    if (isNegative) {
        reversed = -reversed;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}