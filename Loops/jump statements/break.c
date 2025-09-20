#include <stdio.h>
int main()
{
    int i;
    // for loop
    for (i = 1; i <= 10; i++) {

        // when i = 6, the loop should end
        printf("%d ", i);
        if (i == 6) {
            break;
        }
    }
    printf("Loop exited.\n");
    return 0;
}