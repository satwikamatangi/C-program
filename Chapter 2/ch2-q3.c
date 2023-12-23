#include <stdio.h>
#include <math.h>

int main() {
    
    float side1, side2, side3;
    printf("Enter the length of side 1: ");
    scanf("%f", &side1);

    printf("Enter the length of side 2: ");
    scanf("%f", &side2);

    printf("Enter the length of side 3: ");
    scanf("%f", &side3);
   float s = (side1 + side2 + side3) / 2;
   float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
   printf("\nThe area of the triangle is: %.2f square units\n", area);

    return 0;
}
