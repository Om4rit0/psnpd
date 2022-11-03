/*
* Computes the weight of a batch of flat washers.
* 
* Formulas:
*   Edge Area = PI * (outer_radius)^2
*   Inner Area = PI * (inner_radius)^2
*   Rim Area = Edge Area - Inner Area
*   
*   Washer Volume = Rim Area * Thickness
*   Material Area = Length * Width
*   Material Volume = Material Area * Thickness
*   Leftover Volume = Material Volume * Washer Volume
* 
*   Leftover Weight = Leftover Volume * Density 
*/
#include <stdio.h> // printf, scanf definitions
#include <math.h>  // pow definition

#define PI 3.14159

/* Global Variables */
    double hole_diameter; // input - diameter of hole
    double edge_diameter; // input - diameter of outer edge
    double thickness;     // input - thickness of washer
    double density;       // input - density of material used
    double quantity;      // input - number of washers made
    double weight;        // output - weight of washer batch
    double hole_radius;   // radius of hole
    double edge_radius;   // radius of outer edge
    double rim_area;      // area of rim
    double unit_weight;   // weight of 1 washer

/* Extension Variables */
    double washer_unit_volume;   // volume of a single washer
    double material_length;      // length of material's cuboid
    double material_width;       // width of material's cuboid
    double material_unit_area;   // area of a single cuboid of material
    double material_unit_volume; // volume of a single cuboid of material
    double leftover_volume;      // volume of material leftover
    double leftover_weight;      // weight of material leftover

/* Functions Prototypes */
    void get_washer();
    void get_material();
    void set_rim();
    void total_weight();

/* Extension Functions Prototypes */
    void set_volumes();
    void set_weights();

int main(void)
{
    get_washer();
    get_material();
    set_rim();
    total_weight();
    set_volumes();
    set_weights();
    
    /* Display the weight of the batch of washers */
    printf("\nThe expected weight of the batch is %.2f grams", weight);

    /* Display Area of Material Needed */
    printf("\nThe area of needed material is %.2lf square centemeters\n", material_unit_area);
    
    /* Display Weight of Leftover Material */
    printf("The weight of leftover material is %.2lf grams\n", leftover_weight);
    
}

void get_washer()
{
    /* Get the inner diameter, outer diameter, and thickness*/
    printf("Inner diameter in centimeters> ");
    scanf("%lf", &hole_diameter);
    printf("Outer diameter in centimeters> ");
    scanf("%lf", &edge_diameter);
    printf("Thickness in centimeters> ");
    scanf("%lf", &thickness);
}

void get_material()
{
    /* Get the material cuboid's length and width */
    printf("Material Length> ");
    scanf("%lf", &material_length);
    
    printf("Material Width> ");
    scanf("%lf", &material_width);
    
    
    
    /* Get the material density and quantity manufactured */
    printf("Material density in grams per cubic centimeter> ");
    scanf("%lf", &density);
    printf("Quantity in batch> ");
    scanf("%lf", &quantity);
}

void set_rim()
{
    /* Compute the rim area */
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;
    rim_area = PI * pow(edge_diameter, 2) -
    PI * pow(hole_radius, 2);
}

void total_weight()
{
   /* Compute the weight of a flat washer */
    unit_weight = rim_area * thickness * density;

    /* Compute the weight of the batch of washers */
    weight = unit_weight * quantity;
}

void set_volumes()
{
    washer_unit_volume = rim_area * thickness;
    material_unit_area = material_length * material_width;
    
    material_unit_volume = material_unit_area * thickness;
    
}
void set_weights()
{
    leftover_volume = quantity * material_unit_volume - unit_weight;
    leftover_weight = leftover_volume * density;
}
