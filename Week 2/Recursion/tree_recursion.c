#include <stdio.h>

void tree(int n) {
    if (n == 0)
        return;
    printf("%d ", n);
    
    // First recursive call
    tree(n - 1);
    
    // Second recursive call
    tree(n - 1);
}

int main() {
    tree(3);
    return 0;
}