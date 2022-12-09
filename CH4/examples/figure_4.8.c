#include <stdio.h>

#define DEMAND_CHG 35.00
#define PER_1000_CHG 1.10
#define LATE_CHG 2.00

/* Function Prototypes */
  void instruct(void); // Instruct user about the program purpose and method of interacting
  
  void take_inputs(void);

  double comp_use_charge(int previous, int current); // Computes Use Charge taking previous and current reading as inputs
                                                     
  double comp_late_charge(double unpaid); // Computes late charge
                                          
  void display_bill(double late_charge, double bill, double unpaid); // Prints out bill taking late charge, bill, and unpaid as inputs

  /* Global Variables */
  int previous,
      current,
      used;
  double unpaid,
         bill,
         use_charge,
         late_charge;


int main(void)
{
  instruct();
  take_inputs();
}

void instruct(void)
{
  printf("This program figures a water bill ");
  printf("based on the demand charge\n");
  printf("($%.2f) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
  printf("gallons use charge.\n\n");
  printf("A $%.2f surcharge is added to ", LATE_CHG);
  printf("accounts with an unpaid balance.\n");
  printf("\nEnter unpaid balance, previous ");
  printf("and current meter readings\n");
  printf("on separate lines after the prompts.\n");
  printf("Press <return> or <enter> after ");
  printf("typing each number.\n-------------------------------\n\n");
}

void take_inputs(void)
{
  printf("Enter unpaid balance> ");
  scanf("%lf", &unpaid);

  printf("Enter previous reading");
  scanf("%d", &previous);

  printf("Enter current reading");
  scanf("%d", &current);
}

double comp_use_charge(int previous, int current)
{
  double used = (double) current - previous;
  use_charge = used * PER_1000_CHG;
}

double comp_late_charge(double unpaid)
{
  double late_charge;
  
  if (unpaid > 0)
    late_charge = LATE_CHG;
  else
    late_charge = 0.0;

  return late_charge;
}

void display_bill(double late_charge, double bill, double unpaid)
{
  
}
