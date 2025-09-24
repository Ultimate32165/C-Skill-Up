#include <stdio.h>

int main(){
  int i=1;
  while(i!=0){
    float num1,num2;
    printf("Enter First Number: ");
    scanf("%f",&num1);
    printf("Enter Second Number: ");
    scanf("%f",&num2);
    printf("Addition: %.2f + %.2f = %.2f\n", num1,num2, num1+num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1,num2, num1-num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1,num2, num1*num2);
    if(num2==0){
      printf("Error! Cannot divide by 0.\n");
    }
    else printf("Division: %.2f / %.2f = %.2f\n", num1,num2, num1+num2);
    printf("Do you want to perform another calculation? (1 for Yes / 0 for No): ");
    scanf("%d",&i);
  }
  return 0;
}