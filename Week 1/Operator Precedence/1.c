#include <stdio.h>

int main() {
    int a = 6, b = 3, c = 4;
    int res;

    // Precedence and associativity applied here
    res = a + b * c / 2; // First * then / and lastly +
    // 6 + ((3*4)/2)

    printf("%d", res);

    return 0;
}