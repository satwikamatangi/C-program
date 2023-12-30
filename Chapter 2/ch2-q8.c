//satwika-21041
#include <stdio.h>
int main(){
    float a,b,c;
     printf("enter the two numbers to swap :");
    scanf("%f %f",&a,&b);
    printf("before swaping : %f %f\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swaping: %f %f\n",a,b);
    return 0;

}