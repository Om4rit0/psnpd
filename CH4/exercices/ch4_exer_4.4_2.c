#include <stdio.h>
#define PI 3.14159

int main(void)
{
  char choice;
  double length,
         radius,
         perimeter,
         area;
  
  printf("Enter Choice for Square or Circle (S/C)> ");
  scanf("%c", &choice);

  if (choice == 'S' || choice == 's')
  {
    printf("Enter Side Length> ");
    scanf("%lf", &length);

    perimeter = 4 * length;
    area = length * length;
  }
  else if (choice == 'C' || choice == 'c')
  {
    printf("Enter radius> ");
    scanf("%lf", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
  }

  printf("Perimeter = %.2lf\n", perimeter);
  printf("Area = %.2lf\n", area);
}
