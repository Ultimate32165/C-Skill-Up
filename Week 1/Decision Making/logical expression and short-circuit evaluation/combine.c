#include <stdio.h>

int main() {
    int a = 0, b = 0;
    
    if (a > 0 && b > 0 || a - b == 0) {
        printf("Either a and b are equal or greater than 0 or both");
    }
    else {
        printf("else block");
    }
}