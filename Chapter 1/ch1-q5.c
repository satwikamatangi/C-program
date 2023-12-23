#include <stdio.h>


#define PI 3.14159

int main() {
    float len, bred, radius;
    
   
    printf("Enter length and breadth of a rectangle: ");
    scanf("%f", &len);
    scanf("%f", &bred);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    float areaRectangle = len * bred;
    float areaCircle = PI * radius * radius;
    float perimeterRectangle = 2 * (len + bred);
    float perimeterCircle = 2 * PI * radius;
    printf("\nArea of rectangle: %.2f", areaRectangle);
    printf("\nArea of circle: %.2f", areaCircle);
    printf("\nPerimeter of rectangle: %.2f", perimeterRectangle);
    printf("\nPerimeter of circle: %.2f\n", perimeterCircle);
    
    return 0;
}
