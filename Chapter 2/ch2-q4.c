#include <stdio.h>
#include <math.h>
int main() {
   float x,y,r,p;
   printf("Enter x and y coordinates:");
   scanf("%f", &x);
   scanf("%f", &y);
   r = sqrt ( pow(x,2) + pow(y,2));
   p = atan(y/x);
   printf("polar coordinates:(%f,%f)",r,p);
   return 0;
}