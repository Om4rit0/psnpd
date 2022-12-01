#include <stdio.h>

int main(void)
{

  /* Declare Variables*/
  double age,
         water,
         year,
         speed,
         x, y, z,
         w;
  int n,
      condition_test_age,
      condition_test_water,
      condition_test_year,
      condition_test_speed,
      condition_test_variables,
      condition_test_w;


  /* Get Inputs */
    printf("Enter Age> ");
    scanf("%lf", &age);

    printf("Enter water> ");
    scanf("%lf", &water);

    printf("year> ");
    scanf("%lf", &year);
 
    printf("speed> ");
    scanf("%lf", &speed);

    printf("variable X> ");
    scanf("%lf", &x);
    printf("variable Y> ");
    scanf("%lf", &y);
    printf("variable Z> ");
    scanf("%lf", &z);

    printf("Enter W> ");
    scanf("%lf", &w);
    

  /* Evaluate Conditions */
    condition_test_age = ((18 <= age) && (age <= 21));       // Evaluating Age Condition
    condition_test_water = ((water < 1.5) && (0.1 < water)); // Evaluating Water Condition
    condition_test_year = (n % 4 == 0);                      // Evaluating Year Condition
    condition_test_speed = (!(speed > 55));                  // Evaluating Speed Condition
    condition_test_variables = ((y < z) && (x < y));         // Evaluating Variables Condition
    condition_test_w = ((w == 6) || !(w > 3));               // Evaluating W Condition


  /* Print Formated Outputs */
    printf("Age: %i\n", condition_test_age);
    printf("Water: %i\n", condition_test_water);
    printf("Year: %i\n", condition_test_year);
    printf("Speed: %i\n", condition_test_speed);
    printf("Variables: %i\n", condition_test_variables);
    printf("W: %i\n", condition_test_w);
}
