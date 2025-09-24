#include <stdio.h>

void checkEvenOrNot(int num) {
    if (num % 2 == 0)
        // jump to even
        goto label1;
    else
        // jump to odd
        goto label2;

label1:
    printf("%d is even", num);
    return;
label2:
    printf("%d is odd", num);
    return;
}

int main() {
    int num = 26;
    checkEvenOrNot(num);
    return 0;
}