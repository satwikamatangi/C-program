#include <stdio.h>
#include <math.h>
int main() {
   float L1,L2,G1,G2,D;
   printf("Enter latitude in degrees:");
   scanf("%f", &L1);
   scanf("%f", &L2);
   printf("Enter Longitude in degrees:");
   scanf("%f", &G1);
   scanf("%f", &G2);

   D = 3963 *(acos( sin (L1) sin (L2) + cos (L1) cos (L2) * cos ( G2-G1 ) ));
   printf("Distance:%f",D);
   return 0;
}