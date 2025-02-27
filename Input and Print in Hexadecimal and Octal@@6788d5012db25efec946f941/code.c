#include <stdio.h>

int main() {
    int number;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the octal value
    printf("Octal value: %o\n", number);

    // Print the hexadecimal value
    printf("Hexadecimal value: %x\n", number);

    return 0;
}
