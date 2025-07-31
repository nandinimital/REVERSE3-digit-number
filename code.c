#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Check if the number is a 3-digit number
    if (num < 100 || num > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

    // Reverse the digits
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
