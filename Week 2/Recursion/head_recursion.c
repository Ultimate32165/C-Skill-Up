#include <stdio.h>

void show(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    
    // Direct recursive call
    show(n - 1);
}

int main() {
    show(5);
    return 0;
}