#include <stdio.h>
int calculate_factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, original_num, rem;
    int factorial_sum = 0;
    printf("Enter an integer to check: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
    original_num = num;
    if (num < 0) {
        printf("%d is NOT a Strong Number.\n", original_num);
        return 0;
    }
    while (num > 0) {
        rem = num % 10;                     
        factorial_sum += calculate_factorial(rem); 
        num = num / 10;                  
    }
    if (factorial_sum == original_num) {
        printf("%d is a Strong Number!\n", original_num);
    } else {
        printf("%d is NOT a Strong Number.\n", original_num);
    }
    return 0;
}