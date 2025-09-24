// 100 / 5 % 2
/*
The division (/) and modulus (%) operators have the same precedence, so the order in which they are evaluated depends on their ----"left-to-right"---- associativity. This means the division is performed first, followed by the modulus operation. After the calculations, the result of the modulus operation is determined.
*/
#include <stdio.h>

int main(){
  printf("%d",100/5%3);
  return 0;
}