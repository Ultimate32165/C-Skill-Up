#include <stdio.h>

int main() {
    int n = 4;
  
    for (int i = 0; i < n; i++) { // rows
        for (int j = 0; j < n; j++) { // columns
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // new line after each row
    }

    return 0;
}