#include <stdio.h>

int swap(int *ptr1,int *ptr2){
  int *temp;
  temp = ptr1;
  ptr1 = ptr2;
  ptr2 = temp;
  printf("%d %d",*ptr1,*ptr2);
}



int main(){
  int x;
  int y;
  int *ptr;
  ptr = &x;
  *ptr= 69;

  printf("%d\n",*ptr);
  
  ptr+=5;
  
  printf("%d\n",*ptr);
  y = *ptr;
  printf("%d",y);
  // printf("%d",x);
  int a=5;
  int b=6;
  // swap(&a,&b);
  return 0;
}