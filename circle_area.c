#include <stdio.h>
#define PI 3.14159

int main() {
    double radius, area;
    
    // Prompt user for input
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    
    // Display result with formatted output
    printf("\n- Result -\n");
    printf("Radius: %.2f units\n", radius);
    printf("Area: %.2f square units\n", area);
    
    return 0;
}
