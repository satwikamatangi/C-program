#include <stdio.h>

int main() {
    float fahrenheit, centigrade;
    
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32)* 5/9;

    printf("\n fahrenheit: %.2f", fahrenheit);
    printf("\n  centigrade: %.2f",  centigrade);
   
    return 0;
}