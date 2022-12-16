#include <stdio.h>
#include <math.h>

int main(void)
{
  for (int expo = 0; expo < 7; expo++)
    printf("%d %6.0f\n", expo, pow(2, expo));
}
