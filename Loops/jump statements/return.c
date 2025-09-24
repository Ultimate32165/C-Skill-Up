#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    
    // Return the sum as the result of the
    // function
    return sum; 
}

void printMessage() {
    
    // Return from the function with no value (void)
    printf("GeeksforGeeks\n");
    return; 
}

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);

    printMessage();

    return 0;
}