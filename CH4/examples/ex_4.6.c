#include <stdio.h>

int main(void)
{
  int n;

  printf("Enter a number> ");
  scanf("%i", &n);

  double even = (n % 2 == 0);

  printf("\n%3.2f", even);

}
