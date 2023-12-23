#include <stdio.h>

int main() {
    float km, meter, feet, inches, centimeters;
    
    printf("Enter km: ");
    scanf("%f", &km);

    meter = km/1000;
    feet = km/3280.84;
    inches = km/39370.1;
    centimeters = km/100000;

    printf("\n km: %.2f", km);
    printf("\n  meter: %.2f",  meter);
    printf("\n feet: %.2f", feet);
    printf("\n inches: %.2f", inches);
    printf("\n\n centimeters: %.2f", centimeters);

   
    return 0;
}
