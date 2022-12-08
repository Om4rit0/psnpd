#include <stdio.h>

int main(void)
{
  double average,
         n,
         total;

  printf("Enter number of elements> ");
  scanf("%lf", &n);
  printf("Enter sum of all elements> ");
  scanf("%lf", &total);


  if (n > 0)
  {
    average = total / n;
    printf("The average of the set = %.2lf\n", average);
  }
  else
  {
    printf("You can't divide by zero or negatives here\n");
  }
}
