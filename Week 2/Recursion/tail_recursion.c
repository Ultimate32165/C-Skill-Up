#include <stdio.h>

void head(int n) {
    if (n != 0) {
    
        // Recursive call before any processing
        head(n - 1);
    }
    printf("%d ", n);
}

int main() {
    head(5);
    return 0;
}