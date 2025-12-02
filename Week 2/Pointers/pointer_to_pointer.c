#include <stdio.h>

int main(){
  int *ptr;
  int x;
  ptr = &x;
  *ptr = 5;

  printf("adress of pointer 1: %d\n",ptr);
  int **pptr;
  pptr = &ptr;
  printf("adress of pointer 1 in pointer 2: %d\n",pptr);
  printf("value of pointer 1: %d\n",*pptr);
  return 0;
}