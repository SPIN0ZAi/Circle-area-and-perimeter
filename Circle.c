#include <stdio.h>
#include <math.h>


struct Circle { // using struct instead of normal declaration to make things better
    int radius;
};

// Function to calculate the area of a circle
double calculateArea(int radius) {
    return M_PI * pow(radius, 2);
}


double calculatePerimeter(int radius) {
    return 2 * M_PI * radius;
}

int main() {
    struct Circle Circle1, Circle2;

  
    printf("enter the radius of the first circle: ");
    scanf("%d", &Circle1.radius);

   
    printf(" enter the radius of the second circle: ");
    scanf("%d", &Circle2.radius);

   
    printf("Circle 1:\n");

    printf("  Area: %.2f\n", calculateArea(Circle1.radius));

    printf("  Perimeter: %.2f\n", calculatePerimeter(Circle1.radius));


   
    printf("Circle 2:\n");

    printf("  Area: %.2f\n", calculateArea(Circle2.radius));

    printf("  Perimeter: %.2f\n", calculatePerimeter(Circle2.radius));


    return 0;
}
