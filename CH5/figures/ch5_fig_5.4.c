#include <stdio.h>

int main()
{
  /* Variable Declerations  */
  int number_emp,
      count_emp;
  double total_pay;
  double hours,
         rate,
         pay;

  /* Get Inputs */
  printf("enter number of employees> ");
  scanf("%d", &number_emp);

  /* Compute each employee and total pay */
  total_pay = 0.0;
  count_emp = 0;
  while(count_emp < number_emp)
  {
    printf("Hours> ");
    scanf("%lf", &hours);
    printf("Rate> $");
    scanf("%lf", &rate);
    pay = hours * rate;
    printf("Pay = $%6.2f\n\n", pay);
    
    total_pay = total_pay + pay;
    count_emp += 1;
  }

  printf("Total payroll is $%8.2f\n", total_pay);
}
