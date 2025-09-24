#include <stdio.h>

int main() {
    int a = 25, b = 5;

    // using operators and printing results
    printf("a & b: %d\n", a & b); // Performs bit-by-bit AND operation and returns the result.
    printf("a | b: %d\n", a | b); // Performs bit-by-bit OR operation and returns the result.
    printf("a ^ b: %d\n", a ^ b); // Performs bit-by-bit XOR operation and returns the result.
    printf("~a: %d\n", ~a); // Flips all the set and unset bits on the number.
    printf("a >> b: %d\n", a >> b); // Shifts bits to the right by a given number of positions; divides the number by 2 for each shift.
    printf("a << b: %d\n", a << b); // Shifts bits to the left by a given number of positions; multiplies the number by 2 for each shift.

    return 0;
}