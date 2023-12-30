//CH.EN.U4CYS21041
#include <math.h>
#include <stdio.h>
int main()
{
    int amount, a;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    a = amount/100;
    amount = amount - (a*100);
    printf("No. of Rs.100 notes = %d\n",a);
    a = amount/50;
    amount = amount -(a*50);
    printf("No. of Rs.50 notes = %d\n",a);
    a = amount/10;
    amount = amount -(a*10);
    printf("No. of Rs.10 notes = %d\n",a);
    a = amount/5;
    amount = amount -(a*5);
    printf("No. of Rs.5 notes = %d\n",a);
    a = amount/2;
    amount = amount -(a*2);
    printf("No. of Rs.2 notes = %d\n",a);
    a = amount/1;
    amount = amount -(a*1);
    printf("No. of Rs.1 notes = %d\n",a);
    return 0;



}