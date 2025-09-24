// C Program to illustrate the continue statement
#include <stdio.h>

int main()
{
    int i;
    // loop
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            // continue to be executed if i = 2
            printf("Skipping iteration %d\n", i);
            continue;
        }
        printf("Executing iteration %d\n", i);
    }
    return 0;
}