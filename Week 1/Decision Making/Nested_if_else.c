#include <stdio.h>

int main()
{
  int i = 20;

  if (i == 10)
  {
    if (i < 18)
      printf("Still not eligible for vote");
    else
      printf("Eligible for vote\n");
  }
  else
  {
    if (i == 20)
    {
      if (i < 22)
        printf("i is smaller than 22 too\n");
      else
        printf("i is greater than 25");
    }
  }

  return 0;
}