#include <stdio.h>

void funcA(int);
void funcB(int);

void funcA(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 0) {
        printf("%d ", n);
        funcA(n / 2);
    }
}

int main() {
    funcA(10);
    return 0;
}