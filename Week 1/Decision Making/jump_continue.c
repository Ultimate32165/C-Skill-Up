#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {

        // If i is equals to 6,
        // continue to next iteration
        // without printing
        if (i == 6)
            continue;
        else
            printf("%d ", i);
    }

    return 0;
}