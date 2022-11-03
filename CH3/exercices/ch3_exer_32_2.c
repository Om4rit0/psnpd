/*
* Calculate Distance Between two points in space using coordinates x, y, z
* 
* Formulas:
* delta x = x2 - x1
* delta y = y2 - y1
* delta z = z2 - z1
* distance = square root(deltaX^2 + deltaY^2 + deltaZ^2)
*/

#include <stdio.h>
#include <math.h>

/* Functions Prototypes*/
    void get_coordinates();
    void find_differences();
    void square_deltas();
    void find_distance();

/* Global Variables */
    double x_1,  y_1, z_1;
    double x_2, y_2, z_2;
    double delta_x, delta_y, delta_z;
    double delta_x_square, delta_y_square, delta_z_square;
    double distance;

int main(void)
{
    /* Get Points Coordinates*/
    get_coordinates();
    
    /* Calculate Distance */
    find_differences();
    square_deltas();
    find_distance();

    /* Display Output distance */
    printf("The Distance between the 2 points = %.2lf\n", distance);
}

void get_coordinates()
{
    // Input - First Point Coordinates
    printf("Enter First Point Coordinates (x1,y1,z1)\n");
    printf("Enter x 1> \n");
    scanf("%lf", &x_1);
    printf("Enter y> \n");
    scanf("%lf", &y_1);
    printf("Enter z> \n");
    scanf("%lf", &z_1);

    // Input - Second Point Coordinates
    printf("Enter Second Point Coordinates (x2,y2,z2)\n");
    printf("Enter x> \n");
    scanf("%lf", &x_2);
    printf("Enter y> \n");
    scanf("%lf", &y_2);
    printf("Enter z> \n");
    scanf("%lf", &z_2);
}

void find_differences()
{
    // Find the differences between coordinates on same dimensions
    delta_x = x_2 - x_1;
    delta_y = y_2 - y_1;
    delta_z = z_2 - z_2;
}

void square_deltas()
{
    // Square the differences of coordinates on same dimension
    delta_x_square = pow(delta_x, 2);
    delta_y_square = pow(delta_y, 2);
    delta_z_square = pow(delta_z, 2);
}

void find_distance()
{
    // Apply the distance in space formula
    distance = sqrt(delta_x_square + delta_y_square + delta_z_square);
}
