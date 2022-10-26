#include <stdio.h>
#define MILEAGE .35

double input_start();
double input_end();
double calc(double diff);
double diff(double start, double end);

int main(void)
{
   double a,
          b,
          d,
          res;

    a = input_start();
    b = input_end();

    printf("\n");

    d = diff(a, b);
    res = calc(d);
    
    printf("You traveled %.2lf miles. At $0.35 per mile,\n", d);
    printf("Your reimbursement is $%.2lf\n", res);

    return 0;    
}

double input_start()
{
    double a;
    
    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &a);

    return a;
}

double input_end()
{
    double b;
    
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &b);

    return b;
}

double diff(double start, double end)
{
    return (end - start);
}

double calc(double diff)
{
    return (diff * MILEAGE);
}

