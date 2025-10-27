#include <stdio.h>

void hello(){
  printf("Maruf\n");
}

int square(int x)
{
    return x * x;
}


int main(){
  hello();
  printf("%d",square(5));
  return 0;
}