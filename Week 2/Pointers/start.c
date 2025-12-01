#include <stdio.h>

int main(){
  int age=5;
  int *ptr=&age;
  int _age = *ptr;
  int **ptr2 = &ptr;

  printf("%d\n",age);
  printf("%d\n",ptr);
  printf("%d\n",ptr2);
  printf("%d\n",_age);
  
  
  // printf("Adress: %d\n",ptr);
  // printf("Dereference: %d",*ptr);
  return 0;
}