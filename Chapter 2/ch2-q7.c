#include <math.h>
#include <stdio.h>

int main()
{
    int a;
    float result, rad,pi;
    pi = 3.14159;
    printf("Enter the angle in degress: ");
    scanf("%d",&a);
    rad = (a*pi)/180;
    result = sin(rad);
    printf("Sin %d = %.2f\n", a, result);
    result = cos(rad);
    printf("Cos %d = %.2f\n", a, result);
    result = tan(rad);
    printf("tan %d = %.2f\n", a, result);
    result = 1/tan(rad);
    printf("Cot %d = %.2f\n", a, result);
    result = 1/cos(rad);
    printf("sec %d = %.2f\n", a, result);
    result = 1/sin(rad);
    printf("Cosec %d = %.2f\n", a, result);

    

    return 0;
}