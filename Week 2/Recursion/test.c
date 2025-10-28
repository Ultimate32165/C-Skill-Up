#include <stdio.h>

void printTillN(int n){
  if(n==0){
    return;
  }
  printTillN(n-1);
  printf("%d ", n);
}


int main(){
  printTillN(5);
  return 0;
}