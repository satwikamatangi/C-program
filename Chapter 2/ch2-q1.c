#include <stdio.h>

int main() {
   int i,k,num,sum;

   printf("Enter a five digit number: ");
   scanf("%d",&num);
   for (i=0;i<5;i++){
    k = num% 10;
    sum +=k;
    num = num/10;
   }
   printf("Sum of digits:%d\n",sum);
   return 0;
}