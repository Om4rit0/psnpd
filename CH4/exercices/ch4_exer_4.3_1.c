#include <stdio.h>

int main(void)
{
  double item,
         product;
  
  double x,
         y,
         absolute_difference;

  double var,
         zero_count,
         minus_sum,
         plus_sum;
  /* Assignment (a) */
    if (item != 0)
      product = item * product;
    printf("%.2lf\n" ,product);

  /* Assignment (b) */
    absolute_difference = x - y;
    if (absolute_difference < 0)
      absolute_difference *= -1;
    printf("%.2lf\n" ,absolute_difference);

  /* Assignment (c) */
    if (x == 0)
      zero_count += 1;
    if(x < 0)
      minus_sum += x;
    if(x > 0)
      plus_sum += x;

}
