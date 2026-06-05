#include <stdio.h>
int main() {
    int rows;
    printf("Enter the number of rows (1-26): ");
    scanf("%d", &rows);
    if (rows < 1 || rows > 26) {
        printf("Please enter a number between 1 and 26.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}