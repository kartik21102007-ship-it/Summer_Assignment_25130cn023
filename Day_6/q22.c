#include <stdio.h>
#include <math.h>
int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    long long temp = binary; 
    while (binary > 0) {
        remainder = binary % 10;      
        decimal = decimal + remainder * base; 
        binary = binary / 10;          
        base = base * 2;             
    }
    printf("Decimal equivalent of %lld is: %d\n", temp, decimal);
    return 0;
}