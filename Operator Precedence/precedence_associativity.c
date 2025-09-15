#include <stdio.h>
int main() {
  
    // getting the result of the same expression as the
    // example
    int exp = 100 + 200 / 10 - 3 * 10;
    // division first (as left most)
    // multiplication (same precedence as division but it is rightmost in this context)
    // addition
    // substraction

    printf("%d", exp);


    return 0;
}