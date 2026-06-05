#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter any positive number: ");
    scanf("%d", &num);
    for(i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    if(sum == num && num > 0) {
        printf("%d is a PERFECT NUMBER.\n", num);
    } else {
        printf("%d is NOT a PERFECT NUMBER.\n", num);
    }
    return 0;
}