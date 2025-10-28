#include <stdio.h>

int global = 5;

int display(){
  printf("%d\n",global);
}

int main(){
  display();
  global=10;
  display();
  return 0;
}