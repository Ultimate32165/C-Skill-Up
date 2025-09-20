#include <stdio.h>

int sum(int a, int b) {
    int s1 = a + b;
    return s1;
}

int main()
{
    int num1 = 140;
    int num2 = 10;
    int sumOf = sum(num1, num2);
    printf("%d", sumOf);
    return 0;
}