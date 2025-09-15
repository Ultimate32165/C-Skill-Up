#include <stdio.h>
int main()
{
    int a;
  
    // Evaluated as (a = 1), 2, 3
    a = 1, 2, 3; 
    printf("%d", a);
    return 0;
}