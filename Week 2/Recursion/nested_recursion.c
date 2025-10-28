#include <stdio.h>

int nested(int n) {
    if (n > 100)
        return n - 10;
        
    // Two recursive calls nested inside
    // each other.
    return nested(nested(n + 11));
}

int main() {
    printf("%d", nested(95));
    return 0;
}