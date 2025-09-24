#include <stdio.h>

int main(){
    unsigned int var;
    scanf("%u", &var);
    printf("Unsigned Integer: %u\n", var);

    // trying to print negative value using %u
    printf("Printing -10 using %%u: %u\n", -10);
    return 0;
}