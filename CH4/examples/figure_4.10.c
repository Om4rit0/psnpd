#include <stdio.h>

#define DEMAND_CHG 35.00
#define PER_1000_CHG 1.10
#define LATE_CHG 2.00
#define CONSERV_RATE 95
#define OVERUSE_CHG_RATE 2.0

/* Function Prototypes */
  void instruct(void); // Instruct user about the program purpose and method of interacting
  
  void take_inputs(void);

  void comp_use_charge(int previous, int current,int use_last_year); // Computes Use Charge taking previous and current reading as inputs
                                                     
  double comp_late_charge(double unpaid); // Computes late charge
                                          
  void display_bill(double late_charge, double bill, double unpaid); // Prints out bill taking late charge, bill, and unpaid as inputs

  /* Global Variables */
  int previous,
      current,
      use_last_year,
      used;
  double unpaid,
         bill,
         use_charge,
         late_charge;


int main(void)
{
  instruct();
  take_inputs();

  comp_use_charge(previous, current, use_last_year); // Computes Late Charge
  comp_late_charge(unpaid); // Computes late charge

  bill = late_charge + use_charge + DEMAND_CHG + unpaid; // Computes bill

  display_bill(late_charge, bill, unpaid); // Prints out desired Output
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

  printf("Enter last year usage> ");
  scanf("%d", &use_last_year);

  printf("Enter previous reading> ");
  scanf("%d", &previous);

  printf("Enter current reading> ");
  scanf("%d", &current);
}

void comp_use_charge(int previous, int current, int use_last_year)
{
  double used = (double) current - previous;
  use_charge = used * PER_1000_CHG;

  if (used <= ((CONSERV_RATE / 100.0) * use_last_year))
  {
    use_charge = used * PER_1000_CHG;
  }
  else 
  {
    printf("Use charge is at %.2f times ", OVERUSE_CHG_RATE);
    printf("normal rate since use of\n");
    printf("%lf units exceeds %d percent ", used, CONSERV_RATE);
    printf("of last year's %d-unit use.\n", use_last_year);
    use_charge = used * OVERUSE_CHG_RATE * PER_1000_CHG;
  }
}

double comp_late_charge(double unpaid)
{
  if (unpaid > 0)
    late_charge = LATE_CHG;
  else
    late_charge = 0.0;

  return late_charge;
}

void display_bill(double late_charge, double bill, double unpaid)
{
  if (late_charge > 0.0)
  {
    printf("\nBill includes $%.2f late charge", late_charge);
    printf(" on unpaid balance of $%.2f\n", unpaid);
  }
  printf("\nTotal due = $%.2f\n", bill);
}
