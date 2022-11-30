#include <stdio.h>

int main(void)
{
  int age;
  char gender;
  int senior_citizen;

  printf("Enter Citizen Age> ");
  scanf("%i", &age);

  printf("Enter Citizen Gender (M/F)> ");
  scanf(" %c", &gender);

  senior_citizen = (age >= 65);

  printf("Senior: %i, Gender: %c", senior_citizen, gender);
}
