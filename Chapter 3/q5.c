#include <stdio.h>

int main() {
   int i,k,num,rev,a;
   printf("Enter a five digit number: ");
   scanf("%d",&num);
   printf("Reverse of the number:");
   a = num;
   for (i=0;i<5;i++){
    k = num%10;
    rev = rev*10+k;
    printf("%d",k);
    num = num/10;
   }
   if (rev==a){
    printf("\nThe string and the reverse of it are equal");
   }
   else{
    printf("\nThe string and the reverse of it are not equal");
   }
   return 0;
}