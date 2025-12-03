#include <stdio.h>

int square(int *a);
int square(int *a){
  *a = *a * *a;
  printf("The number is now changed\n");
}



int main(){
  int b = 5;
  printf("%d\n",b);
  square(&b);
  printf("%d\n",b);
  return 0;
}